git apply .ci_files/rgb.patch
rm -f build/f7-firmware-C/toolbox/version.*
./fbt COMPACT=1 DEBUG=0 updater_package
mkdir artifacts-rgb-patch
mv dist/f7-C/* artifacts-rgb-patch/
