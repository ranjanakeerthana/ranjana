#include <stdio.h>
 int main()
{
  int a[100], max, n, c;
   printf("Enter the number of elements in array\n");
  scanf("%d", &n);
   printf("Enter %d integers\n", n);
   for (c = 0; c < n; c++)
    scanf("%d", &[c]);
   m= a[0];
   for (c = 1; c < n; c++)
  {
    if (!((a[c] < m)||(a[c]>m)))
    {
       m = a[c];
         }
  }
 
  printf("Maximum element value is %d.\n", max);
  return 0;
}
