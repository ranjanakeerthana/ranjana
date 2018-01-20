#include<stdio.h>
int main()
{
int n,count=0;
printf("enter the n value");
scanf("%d",&n);
while(n!=0)
{
if((n/10)!=0)
{
count++;
}
}
return 0;
}
