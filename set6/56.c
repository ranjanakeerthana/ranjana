#include<stdio.h>
int main()
{
char a[10]="hello123";
int i;
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='a'||a[i]<='z')||(a[i]>=0||a[i]<=9))
{
printf("yes");
}
}
}
