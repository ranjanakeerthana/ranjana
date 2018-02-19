#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int i,n,count;
printf("enter the string");
scanf("%s",s);
printf("enter the number");
scanf("%d",&n);
for(i=n+n;n!=0;i--,n--)
{
printf("%c",s[i]);
}
}
