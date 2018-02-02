#include<stdio.h>
int main()
{
int n=123,n1,n2,n3;
while(n>=1)
{
n2=n%10;
n=n/10;
n1=n%10;
n=n/10;
n3=n%10;
printf("/n%d/n%d/n%d",n3,n1,n2);
n=n/10;
}
return 0;
}
