#include<stdio.h>
#include<math.h>
int main()
{
float p,t,r,si;
printf("enter principal,time,rate");
scanf("%f%f%f",&p,&t,&r);
si=(p*t*r)/100;
printf("the simple interest is %f",floor(si));
}
