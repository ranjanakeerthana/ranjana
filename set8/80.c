#include <stdio.h>

int main()
{
   int n,n1,n2[10],i=0,j,count=0;
   printf("enter the number");
   scanf("%d",&n);
  while(n!=0)
  {
      n1=n%10;
     
      if(n1%2!=0)
      {
          n2[i]=n1;
          i++;
          count++;
      } n=n/10;
  }
    for(j=count-1;j>=0;j--)
    {
        printf("%d",n2[j]);
    }
   
     return 0;
}



