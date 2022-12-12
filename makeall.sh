#!/bin/bash

if [[ $1 == 'fclean' ]]
then
  find . -type dir -name "ex*" | xargs -I{} make -C {} fclean
else
  find . -type dir -name "ex*" | xargs -I{} make -C {}
fi
