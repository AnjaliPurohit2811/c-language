#include<stdio.h>
#include<conio.h>

main()
{
    int x;
    int y;
    
    printf("Enter the size of x : ");
    scanf("%d",&x);
    
    printf("Enter the size of y : ");
    scanf("%d",&y);
    
    int a[x][y];
    int i;
    int j;
    int sum=0;
    
    for(i=0; i<x; i++)
    {
    	for(j=0; j<y; j++)
    	{
    		printf("Enter the value of a[%d][%d] : ",i,j);
    		scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			if((i==0 || j==0 || i==(x-1) || j==(y-1)))
			{
				printf("%d ",a[i][j]);
				sum+=a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("sum : %d",sum);
}
