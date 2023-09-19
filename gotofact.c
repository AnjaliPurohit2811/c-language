#include<stdio.h>

main()
{
	int a;
	printf("enter a value of a:");
	scanf("%d",&a);
	int n=1;
	int fact=1;
	start:
	fact=fact*n;
	n++;
	
	if(n<=a)
	{
		goto start;
	}
	printf("the factorial is=%d",fact);
}
