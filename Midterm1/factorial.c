#include <stdio.h>

int main(void)
{
int n,f=1,i=1;
printf("Enter a number : \n");
scanf("%d",&n);
while(i<=n){
f = f*i;
i++;
}

printf("factorial is %d\n",f);
return 0;
}

