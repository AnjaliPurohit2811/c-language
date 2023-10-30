#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct result
{
	int rollno;
	char name[20];
    int chem;
	int maths;
	int phy;	
};
main()
{
	FILE *fp;
	fp=fopen("result.txt","w");
	int i,total;
	float per;
	struct result s1[5];
	for(i=0; i<5; i++)
	{
		printf("Enter details of Student %d\n",i+1);
		printf("roll no=");
		scanf("%d",&s1[i].rollno);
		printf("Name=");
		scanf(" %[^\n]",&s1[i].name);
		printf("chemistry=");
		scanf("%d",&s1[i].chem);
		printf("Mathematics=");
		scanf("%d",&s1[i].maths);
		printf("physics=");
		scanf("%d",&s1[i].phy);
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		fprintf(fp,"%s(%d)\n",s1[i].name,s1[i].rollno);
		fprintf(fp,"chemistry=%d\n",s1[i].chem);
		fprintf(fp,"mathematics=%d\n",s1[i].maths);
		fprintf(fp,"physics=%d\n",s1[i].phy);
		
		total = s1[i].chem + s1[i].maths + s1[i].phy;
		fprintf(fp,"total=%d\n",total);
		
		per = total/3;
		fprintf(fp,"per=%f\n\n",per);
	}
}
