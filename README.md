# tube-amp-plugin
Actually produce a tube amp simulation that sounds good!

## Dependencies
### Debian
sudo apt install lv2file

## Compile
### Compile LV2 library
./waf configure --prefix=./lv2 --no-plugins --copy-headers
./waf
DESTDIR=./include ./waf install

### Compile LV2 plugins
bazel build --config=clang_config //component/jtm45:main

## Test
### Run tests
bazel test --serial //...
