#include<stdio.h>

main()
{
	int n;
	printf("enter the size=");
	scanf("%d",&n);
	
	int a[n];
	int *s[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter the a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		s[i]=&a[i];
		printf("the square is = %d\n",*s[i] * *s[i]);
	}
}
	