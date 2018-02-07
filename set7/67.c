#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if((n%10)<5)
{
n=(n%10)*10;
printf("the nearest multiple of 10 is %d",n);
}
else
{
n=(n%10)*10;
printf("the nearest multiple of 10 is %d",n);
}
}
