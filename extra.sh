wget https://github.com/xMasterX/all-the-plugins/releases/latest/download/all-the-apps-extra.tgz
tar zxf all-the-apps-extra.tgz
mkdir -p applications/main/clock_app/resources/apps
cp -R extra_pack_build/artifacts-extra/* applications/main/clock_app/resources/apps/
rm -rf extra_pack_build
rm -f build/f7-firmware-C/toolbox/version.*
./fbt COMPACT=1 DEBUG=0 updater_package
mkdir artifacts-extra-apps
mv dist/f7-C/* artifacts-extra-apps/
