#include <stdio.h>
int main()
{
      int n,n1,temp;
      printf("Enter first number: ");
      scanf("%lf", &n);
      printf("Enter second number: ");
      scanf("%lf",&n1);
      printf("%d%d",n,n1);
      temp = n;
      n=n1;
n1=temp;
      printf("%d,%d",n,n1);
            return 0;
}
