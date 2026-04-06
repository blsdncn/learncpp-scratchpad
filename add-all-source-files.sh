#! /bin/bash

find . -path ./.git -prune -o -type f ! -perm /111 -print0 | xargs -0 git add --
