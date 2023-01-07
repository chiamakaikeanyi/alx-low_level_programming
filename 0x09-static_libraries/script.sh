#!/bin/bash

for file in *.c; do
    ar rcs libmy.a "${file%.c}.o"
done \
