#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char s[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
      for(i = 0; i <= l-1; i++)
   {
      if(str[i] == '. ')
      {
    f = f + 1;
      }
   }
   printf("The number of lines in the para are %d", f);
   getch();
}
