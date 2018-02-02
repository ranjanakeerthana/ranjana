#include<stdio.h>
int main()
{
int n,m;
printf("enter two numbers:");
scanf("%d %d",&n,&m);
n=n+m;
if(n%2==0)
{
printf("%d  is even",n);
}
else
{
printf("%d is odd",n);
}
}
