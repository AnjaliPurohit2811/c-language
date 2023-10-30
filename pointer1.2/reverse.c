#include<stdio.h>

main()
{
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	
	int a[n];
	int *reverse=&a[0];
	

	int i;
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
		
	}  

    printf("Reversed array elements:\n");
    reverse=&a[n-1];
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",*reverse);
		reverse--;
	}
}
