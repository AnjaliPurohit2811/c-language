#include<stdio.h>

void max(int a,int b,int c)
{
	printf("Enter the value of a,b and c= ");
	scanf("%d%d%d",&a,&b,&c);
	
	
	if(a>b && a>c)
	{
		printf("a is maximum");
	}
	else if(b>a && b>c)
	{
		printf("b is maximum");
	}
	else
	{
		printf("c is maximum");
	}	
}
main()
{
	int a,b,c;
	max(a,b,c);
}