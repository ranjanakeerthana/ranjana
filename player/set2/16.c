#include<stdio.h>
int main()
{
  int number,i,array[120],j,count=0,k;
    scanf("%d",&number);
    for(i=1;i<=number;i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=1;i<=number;i++)
  {
      count=0;
    for(j=1;j<=number;j++)
    { if((array[j]==array[i])&&(i!=j))
      {
        count+=1;
        break;
      }
    }
    if(count==0)
    {
      printf("%d\n",array[i]);
    } }
return 0;}
