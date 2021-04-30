#!bin/bash
echo Enter the value of N
read value
N=`expr $value - 1`
find /home/vsrikakulapu1 -type f -atime +$N -name "*"|gzip > Compressed.gz

