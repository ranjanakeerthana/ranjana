#include<stdio.h>
int main()
{
int fact=1,i,n;
printf("enter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
