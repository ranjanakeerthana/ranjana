#include<stdio.h>
int main()
{
int n,i,greatest,lowest;
int a[];
printf("enter the array size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
greatest=0;lowest=0;
for(i=0;i<n;i++)
{
if(a[i]>gratest)
{
greatest=a[i];
}
}
for(i=n;i>0;i++)
{
if(a[i]<lowest)
{
  lowest=a[i];
}  
printf("%d",lowest);
}
