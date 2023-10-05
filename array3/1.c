#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("enter the size=");
	scanf("%d",&n);
	
	int i;
	int a[n];
	int b[n];
	int c[n];

	
	for(i=0; i<n; i++)
	{
		printf("enter the array of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("enter the size=");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter the array of b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	int sum=0;
	for(i=0; i<n; i++)
	{
		sum = a[i] + b[i];
		printf("c[%d]= %d\n",i,sum);
	}	
}