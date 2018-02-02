#include<stdio.h>
int main()
{
int n,n1,sum=1;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
sum=sum*n1;
n=n/10;
}
if(sum%2==0)
{
printf( "%d is even",sum);
}
else
{
printf("%d is odd",sum);
}
}
