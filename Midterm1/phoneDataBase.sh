#!bin/bash

echo "Please enter the task number you  wish to do ?"
echo "1 - Read all contents"
echo "2 - Add new contents"
echo "3 - Edit existing phone contents"
echo "4 - Delete present contents"

read task

case $task in
1) echo "The phone book utility contents are : "
awk '{print $0}' pHdatabase.csv| (sed -u 1q ;sort +0 -1);;

2) echo "Enter full Name of contact"
read name
echo "Enter the address"
read adr
echo "Enter phone number"
read phNum
echo $name$'\t'$adr$'\t'$phNum >> pHdatabase.csv
echo Yay! A new contact has been added
echo After adding, the phone book contents are :
awk '{print $0}' pHdatabase.csv| (sed -u 1q ;sort +0 -1);;

3) echo "Enter content you want to edit : "
read edit
echo "Enter content you want be substituted as : "
read subs
sed -i s/$edit/$subs/g pHdatabase.csv
echo After editing, the phone book contents are :
awk '{print $0}' pHdatabase.csv| (sed -u 1q ;sort +0 -1);;

4) echo "Enter content you want to delete : "
read delete
#sed -i /$delete/d pHdatabase.csv
sed -i s/$delete//g pHdatabase.csv
echo After deleting, the phone book contents are :
#awk '{print $0}' pHdatabase.csv| sort +0 -1;; 
awk '{print $0}' pHdatabase.csv| (sed -u 1q ;sort +0 -1);;
esac
