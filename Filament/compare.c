#include<stdio.h>
#include<string.h>

main()
{
	
	char a[20];
	char b[20];
	
	puts("enter the string of a=");
	gets(a);
	
	puts("enter the string of b=");
	gets(b);
	
	int c=strcmp(a,b);
	
	if(c==0)
	{
		puts("both string are equal");
	}
	else
	{
		puts("both string are not equal");
	}
	
	
}