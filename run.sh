#!/usr/bin/env bash

clear
DIR=$(pwd)/build
if [ -d "$DIR" ]; then
  printf '%s\n' "Removing Lock ($DIR)"
  rm -rf "$DIR"
fi

clang-format --style=file -i source/*.{cc,hh}

cmake -S . \
  -B build \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_CXX_COMPILER=mpic++ \
  -DCMAKE_CXX_STANDARD=20 \
  -DCMAKE_CXX_STANDARD_REQUIRED=True \
  -DCMAKE_CXX_FLAGS="-Wall -Wextra -pedantic -Werror" \
  -Wno-dev

cmake --build build --parallel $nproc

# cmake -S /usr/share/deal-ii/examples/step-62 \
#   -B build-62 \
#   -Wno-dev

# cmake --build build-62 --parallel $nproc
