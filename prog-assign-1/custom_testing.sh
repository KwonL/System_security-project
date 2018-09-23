#!/bin/sh

clang-3.8 -g -Xclang -load -Xclang ./build/intcheck/libIntcheckPass.so ./pass/runtime/rtlib.c ./test/malloc-overflow/malloc-overflow.c
