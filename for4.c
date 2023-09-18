#include<stdio.h>
#include<conio.h>

main()
{
	int a=100;
	int n;
	
	printf("enter the value of n=");
	scanf("%d",&n);
	
	for(a=100; a>=n; a--)
	{
		printf("%d ",a);
	}
}
