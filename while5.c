#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	int a=1;
	
	printf("enter the value =");
	scanf("%d",&n);
	
	while(a<=n)
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
}
