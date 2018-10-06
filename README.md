# About

This is a *very* simple example of how to run GTest (Google Test) on a Ubuntu 16+ machine.

For more information about Google Test, check out the official [Google Test Repo](https://github.com/google/googletest) and specifically, the [GTest Primer](https://github.com/google/googletest/blob/master/googletest/docs/primer.md).

# Instructions

## Installing GTest onto your system

* Start by installing `libgtest-dev`:

```bash
sudo apt-get install libgtest-dev
```

* Navigate to where the files were installed, which is usually: `/usr/src/gtest/` if you installed them using the command above.

```bash
cd /usr/src/gtest/
```

* Use C-Make to create the build files.

```bash
sudo cmake CMakeLists.txt
```

* Once the build and makefiles are created you can just run:

```bash

sudo make
```

* Copy the newly-built library into your libraries folder, which for Ubuntu is `/usr/lib/`.

```bash
sudo cp *.a /usr/lib/
```

## Running GTest

To truly make this example minimal, we'll only use 2 files: a source code file and a test file.

* `fake_class.hpp` is a source file that contains two methods. 
* `fake_class_tests.cpp` contains tests for those methods. 


## Building an executable

Once you have your two files, all that is needed is to build them together. All modern C++ IDEs support auto-generating Makefiles/CMake files but if yours does not, then you can use the one provided.

This means you can simply just run: 

```bash
cmake CMakeLists.txt
```

and then 

```bash
make 
```

to create your executable

**CMake Users**: If you would like to use your own custom CMakeFile, then at the very least it must include the following lines to be able to use GTest:

```
find_package(GTest REQUIRED)
include_directories($(GTEST_INCLUDE_DIRS))
target_link_libraries(<projects-executable-name> $(GTEST_LIBRARIES) pthread)
```

## Finally running the tests

Once the executable is built, you can simply run it.

```bash
./gtest_example
```
(if using the provided CMakeLists.txt file)

For more information about Google Test, check out the official [Google Test Repo](https://github.com/google/googletest).

If all went well, you should see 

```

[PASSED] 2 tests.
```

At the bottom.