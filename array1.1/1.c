#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;
	
	printf("enter the size=");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("a[%d] = %d\n\n",i,arr[i]);
	}
}