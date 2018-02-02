#include<stdio.h>
int main()
{
int min,hr;
printf("enter the minute");
scanf("%d",&min);
if(min==60)
{
hr++;
}
if(min>60)
{
min=min-60;
}
printf("%d %d",hr,min);
}
