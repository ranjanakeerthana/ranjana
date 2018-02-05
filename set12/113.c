#include<stdio.h>
int main()
{
int n,k,i,count=0;
int a[10];
printf("enter the n and k value:");
scanf("%d %d",&n,&k);
printf("enter n numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]==k)
{
    count+=1;
   
} 
}
printf("%d",count);
return 0;
}
