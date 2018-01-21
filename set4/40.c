#include <stdio.h>
 void printFibonacciNumbers(int n)
{
    int n1 = 0, n2 = 1, i;
     if (n < 1)
        return 1;
     for (i = 1; i <= n; i++)
    {
        printf("%d ", n2);
        int next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
}
 
int main()
{
    printFibonacciNumbers(7);
    return 0;
}
