#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
    int i,j,k;
    
    for(i=0;i<n;i++)
    {
    	printf("enter the value of a[%d]:",i);
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
        	if(a[i]>a[j])
        	{
        		k=a[i];
        		a[i]=a[j];
        		a[j]=k;
			}
		}
	}
	printf("the array in ascending order:\n");
		for(i=0;i<n;i++)
    {
    	printf(" %d ",a[i]);
	}
	
}
