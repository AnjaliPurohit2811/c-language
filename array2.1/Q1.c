#include<stdio.h>
#include<conio.h>

main()
{
	int i,x,y,s=0;
	
	printf("Enter the size : ");
	scanf("%d",&x);
	printf("Enter the size : ");
	scanf("%d",&y);
	
	int a[x],b[y];
	int z = x+y;
	int c[z];
	
	for(i=0; i<x; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<y; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<x; i++)
	{
		c[i] = a[i];
	}
	for(i=x; i<z; i++)
	{
		c[i] = b[s];
		s++;
	}
	printf("\n");
	for(i=0; i<z; i++)
	{
		
		printf(" %d ",c[i]);
	}
}
