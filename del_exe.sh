#!/bin/bash
#find * -executable -type f| grep \/ | xargs rm
find * -executable -type f | xargs file | grep 'ELF' | cut -d ':' -f1 | xargs rm
