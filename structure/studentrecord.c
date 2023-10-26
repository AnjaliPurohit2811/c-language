#include<stdio.h>

struct student
{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[10];
	int std;
	char school[50];
}s1,s2,s3;

main()
{
	printf("Enter first student informetion\n");
	printf("Enter your id:");
	scanf("%d",&s1.id);
	printf("Enter your name:");
	scanf(" %[^\n]",&s1.name);
	printf("Enter your age:");
	scanf("%d",&s1.age);
	printf("Enter your course:");
	scanf(" %[^\n]",&s1.course);
	printf("Enter your city:");
	scanf(" %[^\n]",&s1.city);
	printf("Enter your standard:");
	scanf("%d",&s1.std);
	printf("Enter your school:");
	scanf(" %[^\n]",&s1.school);
	
	printf("\n");
	
	printf("Enter second student informetion\n");
	printf("Enter your id:");
	scanf("%d",&s2.id);
	printf("Enter your name:");
	scanf(" %[^\n]",&s2.name);
	printf("Enter your age:");
	scanf("%d",&s2.age);
	printf("Enter your course:");
	scanf(" %[^\n]",&s2.course);
	printf("Enter your city:");
	scanf(" %[^\n]",&s2.city);
	printf("Enter your standard:");
	scanf("%d",&s2.std);
	printf("Enter your school:");
	scanf(" %[^\n]",&s2.school);
	
	printf("\n");
	
	printf("Enter third student informetion\n");
	printf("Enter your id:");
	scanf("%d",&s3.id);
	printf("Enter your name:");
	scanf(" %[^\n]",&s3.name);
	printf("Enter your age:");
	scanf("%d",&s3.age);
	printf("Enter your course:");
	scanf(" %[^\n]",&s3.course);
	printf("Enter your city:");
	scanf(" %[^\n]",&s3.city);
	printf("Enter your standard:");
	scanf("%d",&s3.std);
	printf("Enter your school:");
	scanf(" %[^\n]",&s3.school);
	
	printf("\n");
	
	
	//printf("no.\nid\nname\nage\ncourse\ncity\nstd\nschool name\n");
	printf("1.\nid=%d\name= %s\nage=%d\ncourse= %s\ncity= %s\nstd=%d\nschool= %s\n",s1.id,s1.name,s1.age,s1.course,s1.city,s1.std,s1.school);
	printf("2.\nid=%d\name= %s\nage=%d\ncourse= %s\ncity= %s\nstd=%d\nschool= %s\n",s2.id,s2.name,s2.age,s2.course,s2.city,s2.std,s2.school);
	printf("3.\nid=%d\name= %s\nage=%d\ncourse= %s\ncity= %s\nstd=%d\nschool= %s\n",s3.id,s3.name,s3.age,s3.course,s3.city,s3.std,s3.school);}
