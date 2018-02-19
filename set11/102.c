#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d%d",&n,&i);
while((n%i)==0)
{
    n=n/i;

}
if(n%i!=0)
{
    printf("%d",n);
}
}
