#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int i,j;
scanf("%s",a);
i=strlen(a);
j=i%2;
for(k=0;a[k]!='\0';k++)
{
if(j==0)
{
printf("%c",&a[k]);
}
else if(j%2==1)
{
printf("**");
}
else
{
printf("*");
}
}
}
