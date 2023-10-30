#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *fp;
	fp=fopen("even4.txt","w");
	if(fp=='\0')
	{
		printf("file is not available");
	}
	else
	{
		printf("file is available");
	}
	int i;
	
	fprintf(fp,"even number=");
	
	for(i=50; i<=70; i++)
	{
		if(i%2==0)
		{
			fprintf(fp," %d",i);
		}
	}
}