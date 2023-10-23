#include<stdio.h>

main()
{
	int n,*p,i;
	printf("enter the array of size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	p=&a[0];
	int maximum=a[0];
	for(i=0;i<n;i++)
	{
		if(maximum<=*p)
	    maximum=*p;
	    p++;
	}
	printf("Maximum  is: %d",maximum);
	
}
