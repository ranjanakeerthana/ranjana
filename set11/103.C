#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	int i;
	scanf("%[^\n]s",name);
	name[0]=name[0]-32;
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
	{i++;
	name[i]=name[i]-32;}
	}
	printf("%s",name);
		
}
