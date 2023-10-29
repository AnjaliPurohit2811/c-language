#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *fp;
	
	fp = fopen("division.txt","w");
	
	
	int i;
	
	fprintf(fp,"The number divide by both 3 & 5 : \n");
	
	for(i=1; i<=50; i++)
	{
		if(i%3==0 && i%5==0)
		{
			fprintf(fp,"%d\n",i);
		}
	}

}
