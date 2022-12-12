#!/bin/bash

find . -type dir -name "ex*" | xargs -I{} make -C {} $1
