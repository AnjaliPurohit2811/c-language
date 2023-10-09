#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("enter the size = ");
	scanf("%d",&n);
	int a[n];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		printf("enter the element of a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		int count=1;
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				a[j]= -1;
				count++;
			}
		}
		if(a[i]!=-1)
		{
			printf("%d -> %d\n",a[i],count);
		}
	}

}