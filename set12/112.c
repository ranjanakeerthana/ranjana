#include<stdio.h>
int main()
{
int n,k,i;
int a[10];
printf("enter the n and k value:");
scanf("%d %d",&n,&k);
printf("enter n numbers:");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
if(a[i]==k)
{
printf("yes");
}

}
return 0;
}
