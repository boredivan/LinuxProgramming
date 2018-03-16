#!/bin/bash
find * -executable -type f| grep \/ | xargs rm
