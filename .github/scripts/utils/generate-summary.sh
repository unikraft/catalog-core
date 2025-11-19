#!/usr/bin/env bash
#
# Generates the markdown test report and appends it to GITHUB_STEP_SUMMARY.
# Assumes output.log exists in the current directory.
#

echo "## Unikraft Catalog Core Test Results" >> "$GITHUB_STEP_SUMMARY"
echo "### $(date -u)" >> "$GITHUB_STEP_SUMMARY"

# Application test results
grep -E '\[.*\]|PASSED|FAILED' output.log | awk '
  BEGIN {
    print "| Test Suite | Test Name | Status |"
    print "|------------|-----------|--------|"
  }
  /\[.*\]/ {
    app=$0
    gsub(/\[|\]/, "", app)
    next
  }
  /PASSED|FAILED/ {
    split($0, parts, /\.\.\. /)
    test_name = $1
    status = ($NF == "PASSED") ? "✅ PASSED" : "❌ FAILED"
    printf "| %s | %s | %s |\n", app, test_name, status
  }' >> "$GITHUB_STEP_SUMMARY"

echo "### System Configuration" >> "$GITHUB_STEP_SUMMARY"
echo "- QEMU Version: $(qemu-system-x86_64 --version | head -n1)" >> "$GITHUB_STEP_SUMMARY"
echo "- Firecracker Version: $(firecracker-$(uname -m) --version 2>&1 | head -n1)" >> "$GITHUB_STEP_SUMMARY"
echo "- Docker Version: $(docker --version)" >> "$GITHUB_STEP_SUMMARY"
