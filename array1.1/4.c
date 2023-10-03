#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("enter the value of n=");
	scanf("%d",&n);
	
	int i,j;
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d * %d = %d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
}