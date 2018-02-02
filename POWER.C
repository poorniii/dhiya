#include<stdio.h>
#include<conio.h>
int main()
{
int base,exponent;
long long result=1;
printf("Enter a base number:");
scanf("%d",&base);
printf("enter an exponent:");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=%11d",result);
return 0;
}
