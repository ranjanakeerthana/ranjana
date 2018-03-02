#include <stdio.h>
int main() {
	int a[1000],i,count=0,N,k;
	scanf("%d %d",&N,&k);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
     if(a[i]%2!=0)
     {
         count++;
         if(count==k)
         {
         printf("%d",a[i]);
         break;
         }
     }
	}
	return 0;
}
