#include<stdio.h>
int main()
{
char s[30];
int count=1;
printf("enter the sentence");
scanf("%s",&s);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("%d",count);
}
