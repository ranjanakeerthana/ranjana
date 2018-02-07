#include<stdio.h>
int main()
{
char s[10];
int i,flag=0;
printf("enter the string");
scanf("%s",&s);
for(i=0;s[i]!=0;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
flag=1;
}
}if(flag==1)
{
printf("yes string contains  vowel");
}else
{
printf("no string does not contain vowel");
}
}
