#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int binToInt(long bNum)
{ 
  int iNum=0,mod,x=0;
  while(bNum!=0)
  {
	mod = bNum % 10;
	bNum = bNum / 10;
	iNum = iNum + mod*pow(2,x);
	x++;
   }
}

int main()
{
  long b;
  printf("Enter the binary number you want to convert : ");
  scanf("%d",&b);
  printf("Integer of binary number is %d\n",binToInt(b));
  return 0;
}

