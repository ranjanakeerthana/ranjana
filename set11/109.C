#include<stdio.h>
int main()
{
int a[11],i,low;
printf("enter element:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
low=a[0];
if(a[i]<low)
{
low=a[i];
}}
printf("the lowest element is %d",low);
}
