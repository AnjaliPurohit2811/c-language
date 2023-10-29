#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *fp;
	fp=fopen("pr.txt","w");
	if(fp=='\0')
	{
		printf("file is not available");
	}
	else
	{
		printf("file is available");
	}
	printf("\n");
	
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(k=i; k<5; k++)
		{
			fprintf(fp," ");
		}
		for(j=1; j<=i; j++)
		{
			fprintf(fp,"%d",j);
		}
		fprintf(fp,"\n");
	}
}