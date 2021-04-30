#include <stdio.h>

int main(void)
{
unsigned int num = 25;
printf("1s Compliment of %d is = %d\n",num,~num);

printf("Integer bitshifted left by 3 bits is = %d\n",num<<3);

unsigned int newNum = (num << 3) + (~num);

printf("Sum of 1s complement + 3 left bitshifts of %d is New number which is  %d\n",num, newNum);
return 0;
}

