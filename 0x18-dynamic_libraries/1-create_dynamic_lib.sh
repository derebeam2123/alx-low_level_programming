#!/bin/bash

// A script that creates a dynamic library called liball.so

gcc *.c -fPIC -shared -o liball.so
