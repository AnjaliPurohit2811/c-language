#include<stdio.h>
#include<conio.h>

main()
{
	int a=1;
	int n;
	
	printf("enter the value=");
	scanf("%d",&n);
	
	do
	{
		if(a%2==1)
		{
			printf("%d",a);
		}
		else
		{
			printf("\n");
		}
		a++;
	
	}
	while(a<=n);
}
