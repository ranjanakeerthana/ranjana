#include <stdio.h>
int main()
{
    char m;
    printf("Enter a character: ");
    scanf("%c",&m);

    if( (m>='a' && m<='z') || (m>='A' && m<='Z'))
        printf("%c is an alphabet.",m);
    else
        printf("%c is not an alphabet.",m);

    return 0;
}
