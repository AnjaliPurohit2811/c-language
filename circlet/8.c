#include<stdio.h>
#include<conio.h>

main()
{
	int i=45,j;
	
	for(i=45; i<=49; i++)
	{
		for(j=45; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}