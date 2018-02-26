#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,j,temp,b;
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        for(j=i;j<b;j++)
        {   if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%c",a[i]);
    }
}
