#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	int a=100;
	
	printf("enter the value=");
	scanf("%d",&n);
	
	while(a>=n)
	{
		printf("%d\n",a);
		a--;
	}
}
