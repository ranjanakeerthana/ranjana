#include<stdio.h>
int main()
{
int array[100], n, c, d,flag=0;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        flag=1;
      }
    }
  }if(flag==1)
  {
      printf("%d\n%d",d+1,array[d]);
  }
 
  
 
  return 0;
}
