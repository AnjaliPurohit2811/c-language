#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	int sum=0;
	int firstdigit;
	int lastdigit;
	
	printf("enter the value=");
	scanf("%d",&a);
	lastdigit = a%10;
	
	while(a>=10)
	{
		a=a/10;
	}
	firstdigit=a;
    sum=firstdigit + lastdigit;
    printf("Sum of first and last digit = %d",sum);
	
	
	
}
