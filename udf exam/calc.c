#include<stdio.h>

void calc()
{
	int a,b;
	
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	
	printf("sum is=%d\n",a+b);
	printf("sub is=%d\n",a-b);
	printf("multiply is=%d\n",a*b);
	printf("divide is=%d\n",a/b);
	
	
}
main()
{
	calc();
}