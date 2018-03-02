#include<stdio.h>
void main()
{
int x[3],y[3],remainder,cocient,i,n;
  printf("enter the n value");
  scanf("%d",&n);
printf("enter dividend and divisor");
for(i=0;i<n;i++)
{
scanf("%d%d\n",&x[i],&y[i]);
}
printf("the result of division is");
{
for(i=0;i<n;i++)
printf("%d\n",(x[i]/y[i]));
}
printf("the result of modulo is");
for(i=0;i<n;i++)
{
printf("%d\n",(x[i]%y[i]));
}
}
