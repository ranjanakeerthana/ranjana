#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char s[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("Enter any string\n");
   gets(s);
   for(i = 0; s[i] !='\0'; i++)
   {
      if(s[i]<=0||s[i]>=9)
      {
         
      l = l + 1;
   }}
   printf("The number of characters in the string are %d\n", l);
   getch();
}
