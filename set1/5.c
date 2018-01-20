#include<stdio.h>
int main()
{
int n=1998;
if(n%4==0&&n%400||n%100==0)
{
printf("It is leap year");
}
else
{
printf("not a leap year");
}
return 0;
}
