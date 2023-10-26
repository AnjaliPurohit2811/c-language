#include<stdio.h>
#include<string.h>

struct employees
{
	char name[20];
	int id;
	int age;
	char role[10];
    char city[10];
	int experience;
	char companyname[20];	
};
main()
{
	int n,i;
	char name[20];
	printf("enter number of employees:");
	scanf("%d",&n);
	struct employees s1[n];
	for(i=0;i<n;i++)
	{
		printf(" Record System for %d employees:\n",i+1);
		printf("enter the id=");
		scanf("%d",&s1[i].id);
		printf("enter the name=");
		scanf(" %[^\n]",&s1[i].name);
		printf("enter the age=");
		scanf("%d",&s1[i].age);
		printf("enter the role=");
		scanf(" %[^\n]",&s1[i].role);
		printf("enter the city=");
		scanf(" %[^\n]",&s1[i].city);
		printf("enter the experience=");
		scanf("%d",&s1[i].experience);
		printf("enter the company name=");
		scanf(" %[^\n]",&s1[i].companyname);
		printf("\n");
	}

	for(i=0;i<n;i++)
	{
		printf("no.=%d\nid=%d\nname= %s\nage=%d\nrole= %s\ncity= %s\nexperience=%d\ncompanyname= %s\n",i+1,s1[i].id,s1[i].name,s1[i].age,s1[i].role,s1[i].city,s1[i].experience,s1[i].companyname);
		printf("\n");
	}
}
