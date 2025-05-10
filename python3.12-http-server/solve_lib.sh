cd ~/Desktop/Personal/OpenSourceContribution/catalog-core/python3.12-http-server

rm -rf rootfs initrd.cpio
mkdir -p rootfs/app rootfs/lib/python3.10

# copie stdlib 3.12 în python3.10
cp -r /usr/local/lib/python3.12/* rootfs/lib/python3.10/

cp http-server.py rootfs/app/

pushd rootfs
  find . | cpio -o -H newc > ../initrd.cpio
popd