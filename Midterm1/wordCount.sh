#!/bin/bash

num=`grep -o $1 < myexamfile.txt | wc -l`

echo The keyword \'$1\' occurs $num times in the myexamfile.txt

