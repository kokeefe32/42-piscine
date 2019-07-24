#!/bin/bash
find . -type f -o -type d | wc -l | awk '$1=$1'

