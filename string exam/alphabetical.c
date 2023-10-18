#include<stdio.h>
#include<string.h>

main()
{
	char a[30];
	puts("Enter the string = ");
	gets(a);
	
	int length = strlen(a);
	
	int i,j,n;
	
	for(i=0; i<length-1; i++)
	{
		for(j=0; j<length-i-1; j++)
		{
			if(a[j] > a[j+1])
			{
				n = a[j];
				a[j] = a[j+1];
				a[j+1] = n;
			}
		}
	}
	
	printf("String in alphabetic order : %s",a);
}
