#include<stdio.h>
int main()
{
int min1,min2,hr1,hr2,min,hr;
printf("enter first timing:");
scanf("%d %d",hr1,min1);
printf("enter second timing");
scanf("%d %d",hr2,min2);
min=min1-min2;
hr=hr1-hr2;
printf("hour is %d and minute is %d",hr,min);
}
