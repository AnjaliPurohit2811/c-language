#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++,ch++)
		{
			printf("%c ",ch);
		}
		printf("\n");
	}
}
