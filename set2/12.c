#include <stdio.h>
int main()
{
    int n, ri = 0, r, o;
    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;
    while( n!=0 )
    {
        r = n%10;
        ri = ri*10 + remainder;
        n /= 10;
    }
       if (o == ri)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);
    
    return 0;
}
