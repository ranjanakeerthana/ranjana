#include<stdio.h>
int main()
{
int n,i,greatest;
int a[];
printf("enter the array size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
greatest=0;
for(i=0;i<n;i++)
{
if(a[i]>gratest)
{
greatest=a[i];
}
}
printf("%d",greatest);
}
