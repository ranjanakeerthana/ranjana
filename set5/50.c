#include<stdio.h>
#include<math.h>
int main()
{
int n,i,k;
printf("enter the number:");
scanf("%d%d",&n,&k);
for(i=0;i<=k;i++)
{
if(n==pow(2,i))
{
printf("yes");
}
}
}
