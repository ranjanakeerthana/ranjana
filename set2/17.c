#include<stdio.h>
int main()
{
int n=321,sum=0,n1;
while (n!=0)
{
n1=n%10;
sum=sum+n1;
n=n/10;
}
printf("%d",sum);
}
