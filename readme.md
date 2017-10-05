# CppUTest Example

This is an example about using [CppUTest](http://cpputest.github.io/)
to mock C files for unit test.


## Prerequisites

1. [CMake](https://cmake.org/)
2. GNU C/C++ compiler


## Directory Structure

```
cpputest_example
├── CMakeLists.txt           --> main cmake configuration files
├── LICENSE
├── readme.md
├── src                      --> pythagorean example
│   ├── CMakeLists.txt
│   ├── main.c
│   ├── pythagorean.c
│   ├── pythagorean.h
│   ├── square_root.c        --> dependency of pythagorean.c
│   └── square_root.h
├── tests                    --> unit test against pythagorean.c
│   ├── CMakeLists.txt
│   └── pythagorean_ut       --> unit test by CppUTest and CppUMock
│       ├── CMakeLists.txt
│       ├── main.cpp
│       ├── pythagorean_ut.cpp
│       └── square_root_mock.cpp
└── testtools                --> unit test tools
    ├── CMakeLists.txt
    ├── cpputest             --> cpputest library 
    └── cpputestext          --> cpputestext library which provide mocking support
```
    
    
## References:

1. [CppUTest](http://cpputest.github.io/manual.html)
2. [CppUMock](http://cpputest.github.io/mocking_manual.html)
3. [CMake Tutorial - JohnLamp.netJohnLamp.net](https://www.johnlamp.net/cmake-tutorial.html)
4. [CMake Tutorial | CMake](https://cmake.org/cmake-tutorial/)
5. [Introduction to CMake by Example | derekmolloy.ie](http://derekmolloy.ie/hello-world-introductions-to-cmake/)


[![Build Status](https://travis-ci.org/maxpeng/cpputest_example.svg?branch=master)](https://travis-ci.org/maxpeng/cpputest_example)
