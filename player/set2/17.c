#include<stdio.h>
int main()
{
int l,r,i=1;
scanf("%d%d",&l,&r);
for(i=r;i<100000;i++)
{
if(i%l==0&&i%r==0)
{

break;
}
}printf("%d",i);
}
