```console
$ git clone git@github.com:cpp-review-dune/deal-ii-lab1.git
$ cd deal-ii-lab1
$ cmake -S . -B build-debug -DCMAKE_BUILD_TYPE="Debug" -DCMAKE_CXX_COMPILER=mpic++
$ cmake -S . -B build-release -DCMAKE_BUILD_TYPE="Release" -DCMAKE_CXX_COMPILER=mpic++
$ cmake --build build
```

[`deal-ii-9.4.2-1-x86_64.pkg.tar.zst`](https://github.com/carlosal1015/aur/releases/download/2023-06-09/deal-ii-9.4.2-1-x86_64.pkg.tar.zst)
[`add_subdirectory()`](https://cmake.org/cmake/help/v3.26/command/add_subdirectory.html)