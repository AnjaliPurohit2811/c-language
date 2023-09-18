#include<stdio.h>
#include<conio.h>

main()
{
	int a=1000;
	int n;
	
	printf("enter the value=");
	scanf("%d",&n);
	
	do
	{
		if(a%2==0)
		{
			printf("%d",a);
		}
		else
		{
			printf("\n");
		}
		a--;
	
	}
	while(a>=n);
}
