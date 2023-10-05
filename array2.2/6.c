#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	
	printf("Enter the size of x : ");
	scanf("%d",&x);
	
	printf("Enter the size of y : ");
	scanf("%d",&y);
	
	int a[x][y];
	int i;
	int j;
	int sum=0;
	int sum1=0;
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	
	printf("The sum of the diagonal is : %d\n",sum);
	
	for(i=0; i<x; i++)
	{
		sum1 = sum1 + a[i][y-i-1];
	}
	
	printf("The sum of the anti-diagonal is : %d",sum1);
}
