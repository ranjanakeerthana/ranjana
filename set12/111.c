#include<stdio.h>
void main()
{int n,k,count=0;
scanf("%d",&n);
while(n>0)
{k=n%10;
n=n/10;
count++;
}
printf("%d",count);
}
