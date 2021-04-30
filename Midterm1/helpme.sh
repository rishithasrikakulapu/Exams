#!bin/bash

echo Please enter a command: 
read cmd

line1=`grep -n $cmd\(STARTCOMMAND mandatabase.txt|awk -F: '{print $1}'`
l2=`grep -n $cmd\(ENDCOMMAND mandatabase.txt|awk -F: '{print $1}'`

l1=`expr $line1 + 1`

if [ $l1 -ne 0 ]
then 
    echo `tail -n +$l1 mandatabase.txt| head -n $((l2-l1))`
else
    echo sorry,I cannot help you
fi
