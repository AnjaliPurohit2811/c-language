#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("enter the size=");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = %d\n\n",i,a[i]);
	}
	int b=sizeof(a)/sizeof(int);
	printf("length of an array= %d",b);
}