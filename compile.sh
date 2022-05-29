#!/usr/bin/env bash
set -euo pipefail exec > ~/log.log 2>&1

printf "######################################################################
##
##          Setting up environment...
##
######################################################################
"

export CC=clang
export CXX=clang++

cd "${0%/*}"
mkdir -p build
cmake -G Ninja -S . -B build

printf "######################################################################
##
##          Compiling...
##
######################################################################
"

cmake --build build --clean-first -j 4 -- -v -j 4
