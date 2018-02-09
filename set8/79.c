#include<stdio.h>
#include<math.h>
int main()
{
int n,k,m,temp;
scanf("%d  ",&n);
scanf("%d",&k);
m=n*k;
temp=sqrt(m);
if(temp*temp==m)
{
printf("yes it is perfect square");
}
else
{
printf("no");
}
}
