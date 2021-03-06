# Netcalc
Program converts values from the IP address and subnet mask to network values.
It can retrieve data from the network interface.

## Compile
```sh
mkdir build
cd build
cmake ../       # Default use release type
make
```
### Optional
```sh
make install
```
### Cmake build type
Debug type is a draft version, release is ready to install.
Default type is release
```sh
cmake -DCMAKE_BUILD_TYPE=Release ../
cmake -DCMAKE_BUILD_TYPE=Debug ../
```

## Install from snapstore
[![netcalc](https://snapcraft.io//netcalc/badge.svg)](https://snapcraft.io/netcalc)
[![netcalc](https://snapcraft.io//netcalc/trending.svg?name=0)](https://snapcraft.io/netcalc)

```sh
snap install netcalc
```
### Images
<img src="https://dashboard.snapcraft.io/site_media/appmedia/2020/06/netcalc-1.png" width="31%" align="left">
<img src="https://dashboard.snapcraft.io/site_media/appmedia/2020/06/netcalc-2.png" width="31%" align="left">
<img src="https://dashboard.snapcraft.io/site_media/appmedia/2020/06/netcalc-3.png" width="31%" align="left">
