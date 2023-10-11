#include<stdio.h>
#include<string.h>

main()
{
	char a[20];
	
	puts("enter the string=");
	gets(a);
	
	int i,n,c=0;
	
	n=strlen(a);
	
	for(i=0; i<n/2; i++)
	{
		if(a[i]==a[n-i-1])
		{
			c++;
		}
	}
	if(c==i)
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
}