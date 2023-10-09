#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	
	printf("enter the size=");
	scanf("%d",&x);
	printf("enter the size=");
	scanf("%d",&y);
	
	int a[x][y];
	int i,j;
	int max=0;

	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("enter the value of a[%d][%d]= ",i,j);
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
	    if(a[i][j]>max)
		{
		   max=a[i][j];
		}
    	}
	}
	printf("max is = %d",max);
	
}