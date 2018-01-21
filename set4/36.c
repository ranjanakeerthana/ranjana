#include <stdio.h>
void main()
{
      char str [81];
      int nletter, ndigit, nspace, nother; /* char counts */
      int i;
      clrscr();
      printf("Enter a line of text:\n");
      gets(str);
      /* count characters in string str */
      nletter = ndigit = nspace = nother = 0; /* init counts */
      i = 0;
      while (str[i] != '\0')
          {
              char ch= str[i];
              if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
              nletter++;
              else if (ch>= '0' && ch<= '9')
                       ndigit++;
              else if (ch == ' ' || ch =='\n' || ch == '\t')
                       nspace++;
              else nother++;
                       i++;
          }
                       
              printf("  Other chars : %d\n",  nother);
              getch();
} 
