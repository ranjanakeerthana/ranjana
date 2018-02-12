#include<stdio.h>
int main()
{
int n,n1;
printf("enter the number");
scanf("%d",&n);
for(;n!=0;n=n/10)
{
n1=n%10;
printf("%d",n1);
}}
