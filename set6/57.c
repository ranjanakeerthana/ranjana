
#include <stdio.h>
int main() {
    int i ;
    int j ,k;
    printf("enter i and j value:");
    scanf("%d %d",&i,&j);
    printf(" value of i=%d j=%d before swapping", i, j);
  k=i;
  i=j;
  j=k;
    printf("value of i=%d j=%d after swapping", i, j);

    return 0;
}
