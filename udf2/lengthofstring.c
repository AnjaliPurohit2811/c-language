#include<stdio.h>
#include<string.h>

int len(int i)
{
	i=strlen(i);
	
}

int main()
{
	char a[20];
	int i;
	int length=0;
	
	puts("enter the string=");
	gets(a);
	
	length=len(a);
	
	printf("the length = %d",length);
	
	return 0;
}