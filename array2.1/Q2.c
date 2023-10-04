#include<stdio.h>
#include<conio.h>

main()
{
	int n,x;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	int i;
	int a[n];
	
	for(i=n; i<=x; i++)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
	}
}
