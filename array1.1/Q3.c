#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;
	
	printf("Enter the array size : ");
	scanf("%d",&n);
	
	int a;
	int c[a];
	int d[a];
	int sum[a];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&c[i]);
	}
	
	printf("Enter the array size : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&d[i]);
	}
	
	for(i=0; i<n; i++)
    {
      	 sum[i] = c[i] + d[i];
	}
	printf("total sum of array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("sum[%d] : %d\n",n,sum[i]);
	}
}
