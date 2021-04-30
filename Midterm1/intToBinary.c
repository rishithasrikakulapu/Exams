#include<stdio.h>

int main(){
int iNum,x;
int bNum[20];
printf("Enter the integer you want to convert to binary: ");
scanf("%d",&iNum);
int Number = iNum;
for(x=0;iNum>0;x++){
bNum[x] = iNum%2;
iNum = iNum/2;
}
printf("Binary of %d is : ",Number);
for(x=x-1;x>=0;x--){
printf("%d",bNum[x]);
}
printf("\n");
return 0;
}
