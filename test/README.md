
Test for pigtime
================

How to test?
------------

Use command `cmake . && make && ./Tests` to test pigtime.

Detail
------

### GTest

This test source cpp file need the support of `GTest`.

Chick [this](https://github.com/google/googletest) to get the info of how to
download it and install `GTest`

### cmake

Test programme need the support of `Cmake`.

If you are using Linux, it is easy to download and install this tool by:

``` shell
$ wget https://github.com/Kitware/CMake/releases/download/v3.17.1/cmake-3.17.1.tar.gz
$ tar xvf cmake-3.17.1.tar.gz
$ cd cmake-3.17.1.tar.gz
$ ./bootstrap
$ make
$ sudo make install
```

Or you can chick [this](https://cmake.org/download/) to Download the last version.

