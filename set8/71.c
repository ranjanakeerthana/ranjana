#include <stdio.h>
#include <string.h>
void isPalindrome(char str[])
{
   
    int i = 0;
    int h = strlen(str) - 1;
 
       while (h > i)
    {
        if (str[i++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}
 
int main()
{
    isPalindrome("lappal");
    isPalindrome("lapeepal");
    isPalindrome("geeks");
    return 0;
}
