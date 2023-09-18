#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int n;
	
	printf("enter the value of n=");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++)
	{
		if(a%2==1)
		{
			printf("%d",a);
		}
		else
		{
			printf("\n");
		}
	}
}
