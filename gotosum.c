#include<stdio.h>

main()
{
	int a;
	printf("enter a value of a:");
	scanf("%d",&a);
	int n=1;
	int sum=0;
	start:
	sum=sum+n;
	n++;
	
	if(n<=a)
	{
		goto start;
	}
	printf("the sum is=%d",sum);
}
