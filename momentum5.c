#include<stdio.h>
#include<conio.h>

main()
{
	int phy;
	int che;
	int bio;
	int math;
	int com;
	float per;
	int sum;
	
	printf("Enter your marks : ");
	scanf("%d",&phy);
	printf("Enter your marks : ");
	scanf("%d",&che);
	printf("Enter your marks : ");
	scanf("%d",&bio);
	printf("Enter your marks : ");
	scanf("%d",&math);
	printf("Enter your marks : ");
	scanf("%d",&com);
	
	sum = phy + che + bio + math + com;
	per = (sum*100) / 500;
	
	printf("sum is : %d\n",sum);
	printf("per is : %.2f\n",per);
	
	if(per>=90 && per<=100)
	{
		printf("Grade : A");
	}
	else if(per>=80 && per<=90)
	{
		printf("Grade : B");
	}
	else if(per>=70 && per<=80)
	{
		printf("Grade : C");
	}
	else if(per>=60 && per<=70)
	{
		printf("Grade : D");
	}
	else if(per>=50 && per<=60)
	{
		printf("Grade : E");
	}
	else if(per>=40 && per<=50)
	{
		printf("Grade : F");
	}
}
