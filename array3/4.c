#include<stdio.h>
#include<conio.h>

main()
{
	int n; 
	
	printf("enter the size=");
	scanf("%d",&n);
	
	int i;
	int a[n];
	int min=a[n];
	int max=0;
	
	for(i=0; i<n; i++)
	{
		printf("enter the array of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
	    if(a[i]>max)
		{
		   max=a[i];
		}	
	}
	min=max;
	for(i=0; i<n; i++)
	{
	    if(a[i]<min)
		{
		   min=a[i];
		}	
	}
	printf("\n");
	printf("max = %d\n",max);
	printf("min = %d",min);
}