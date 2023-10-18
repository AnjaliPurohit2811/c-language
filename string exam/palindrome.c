#include<stdio.h>

main()
{
	char a[30];
	
    puts("enter the string=");
    gets(a);
    
	int i;
	int n,c=0;
	int length=0;
	
	for(i=0; a[i]!='\0'; i++)
	{
		length++;
	}
	
	for(i=0; i<length/2; i++)
	{
		if(a[i] == a[length-i-1])
		{
			c++;
		}
	}
	
	if(c==i)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrom");
	}
}
