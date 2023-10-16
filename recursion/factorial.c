#include<stdio.h>

int fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	return a*fact(a-1);
}
main()
{
	int a;
	printf("enter the value=");
	scanf("%d",&a);
	
	printf("fact = %d",fact(a));
	
}