#include<stdio.h>
#include<conio.h>

main()
{
	char ch;
	
	printf("Enter the value=");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	{
		printf("this is alphabet");
	}
	else if(ch>=33 && ch<=47)
	{
		printf("this is special character");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("this is digit");
	}
}
