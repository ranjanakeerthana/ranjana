#include<stdio.h>
int main()
{
  char s1[25],s2[25];
  int i=0,k=0;
  printf("\nEnter First String:");
  gets(s1);
  printf("\nEnter Second String:");
  gets(s2);
  while(s1[i]!='\0')
  i++;
  while(s2[k]!='\0')
  {
    s1[i]=s2[k];
    k++;
    i++;
  }
  s1[i]='\0';
  printf("\nConcatenated String is %s",s1);return 0;
}
