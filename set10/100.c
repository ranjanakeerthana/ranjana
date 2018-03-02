#include<stdio.h>
int main()
{
int n,n1,sum=1;
scanf("%d",&n);
while(n!=0
{n1=n%10;
sum=sum*n1;
n=n/10;
}
printf("%d",sum);
}
