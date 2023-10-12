#include<stdio.h>
#include<string.h>

main()
{
	char a[20];
	int b,i=0;
	int digit=0;
	
	
	puts("enter the string=");
	gets(a);
	
//	puts("enter the string=");
//	gets(b);
	
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]>=47 && a[i]<=57)
		{
			digit++;
		}
	}
		if(digit!=0)
	{
		puts("the string is numeric");
	}
	else
	{
		puts("the string is not numeric");
	}
}