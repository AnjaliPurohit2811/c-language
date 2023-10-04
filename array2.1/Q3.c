#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("Enter the array size : ");
	scanf("%d",&n);
	
	int i;
	int a[n];
	int b[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		b[n] = a[i] * a[i];
		printf("%d ",b[n]);
	}
	
}
