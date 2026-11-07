# This is test
## This is a test
### This is a test
**MyApp**

italicized *This is my app*

~~This line igrnored~~

**This is a bold _italicized_ line**

use `git status` to list all new or modified files

```
git add
git status
git commit
```
git link (https://github.com)

[Contribution guidelines for this project](docs/CONTRIBUTING.md)

## C++ demo and tests

This repository includes a small C++17 greeting program and a focused test
executable built with CMake. Build and run the tests with:

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

Run the demo with `./build/cpp_demo`.


