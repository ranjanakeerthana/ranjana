#include<stdio.h>
int main()
{
int i;
char a[10];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
printf("%c",a[i]);
}
}
}
