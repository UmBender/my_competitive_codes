#!/bin/bash

touch *.cpp
clang++ main.cpp -o programa -O3

./programa
