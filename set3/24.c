#include <stdio.h>
 int main()
{
  int a[100], max, n, c,i,j,temp;
   printf("Enter the number of elements in array\n");
  scanf("%d", &n);
   printf("Enter %d integers\n", n);
   for (c = 0; c < n; c++)
    scanf("%d", &[c]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
 
            if(a[i] > a[j])
            {
                temp     = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

  return 0;
}
