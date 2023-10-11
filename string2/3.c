#include<stdio.h>  
#include <string.h>  
 
main()
{   

	char a[20];
	int i,j;
	puts("enter the name:");
	gets(a);
	int len = strlen(a);
	
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			a[i]=a[i+1];
		}
		else
		{
			printf("%c",a[i]);
		}
	}
}
