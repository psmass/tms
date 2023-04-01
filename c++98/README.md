# C++98 example using Code Gen and Compiled Types

## Environment
The example code was built with the following environment.

* MacOS Darwin (x64)
* Ubuntu 20.04 gcc 9.4.0
* Connext DDS Professional 6.1.0 - 7.0.0 (CmakeList.txt calls out 7.0.0)

## Building Debug executable:

1. Create build directory. 

2. From build type the following.
from c++/src> mkdir build, cd build (any of the following)

`cmake ..`

`cmake -DBUILD_SHARED_LIBS=ON ..`

`cmake -DCMAKE_BUILD_TYPE=Debug ..`

`cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Darwin17clang9.0 -DCMAKE_BUILD_TYPE=Debug ..`

`cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Linux4gcc7.3.0 (5.4.0 also good) -DCMAKE_BUILD_TYPE=Debug ..`

3. The project can be built from the command line.

`cmake --build . --config Debug`

OR if you want to see the build output

`cmake --build . --config Debug --verbose`

OR simply:
`cmake --build .`


## Running Example:
Device and Controller must be executed from the src directory.
(you should not need to set the rti env variables to run, but not a problem if you do)
e.g. ./src/build/Device  ./src/build/Controller


## Issues
RUN Scripts in toplevel dir broken
Not sure if Connext 7.0 would work - likely
