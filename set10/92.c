#include<stdio.h>
int main()
{
int N,n[10],i,sum=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{
    scanf("%d",&n[i]);
sum=sum+n[i];}
printf("%d",sum);
}
