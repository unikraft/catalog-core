#!/usr/bin/env python3
"""Write the root DNSSEC trust anchors as dnsmasq trust-anchor= lines.

With a file argument, converts dns-root-data's root.ds (DS presentation
format). Without one, fetches IANA's root-anchors.xml and skips retired keys
"""

import sys
import urllib.request
import xml.etree.ElementTree as ET
from datetime import datetime, timezone
from pathlib import Path

URL = "https://data.iana.org/root-anchors/root-anchors.xml"
OUT = Path("rootfs/etc/trust-anchors.conf")
FIELDS = ("KeyTag", "Algorithm", "DigestType", "Digest")

anchors = []

if len(sys.argv) > 1:
    # `.  IN DS  20326 8 2 <digest>` -> keytag, algorithm, digest type, digest
    for line in Path(sys.argv[1]).read_text().splitlines():
        fields = line.split()
        if len(fields) >= 7 and fields[-5].upper() == "DS":
            anchors.append(fields[-4:])
else:
    now = datetime.now(timezone.utc)
    with urllib.request.urlopen(URL, timeout=20) as response:
        keys = ET.parse(response).getroot().iter("KeyDigest")
        for key in keys:
            # revoked keys must not be anchors.
            retired = key.get("validUntil")
            if retired and datetime.fromisoformat(retired) <= now:
                continue
            anchors.append([key.findtext(f, "").strip() for f in FIELDS])

if not anchors:
    raise SystemExit("trust-anchors.py: no usable trust anchors found")

OUT.write_text("".join(f"trust-anchor=.,{','.join(a)}\n" for a in anchors))
