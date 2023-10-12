#include<stdio.h>

void divide()
{
	int a;
	
	printf("enter the value=");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("the number is divisable by both");
	}
	else
	{
		printf("the number is not divisable by both");
	}
	
}

main()
{
	divide();
}