#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("prime number");
}
else
{
printf("number is composite number");
}
}
