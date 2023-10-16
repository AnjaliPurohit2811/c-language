#include<stdio.h>

int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
	return a+sum(a-1);
}
main()
{
	int a;
	printf("enter the value=");
	scanf("%d",&a);
	
	printf("sum = %d",sum(a));
	
}