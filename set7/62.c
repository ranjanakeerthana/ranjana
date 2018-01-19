#include<stdio.h>
int main()
{
char s[10]="10101"
int i;
for(i=0;s[i]!='/0';i++)
{
if(s[i]!=0||s[i]!=1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
