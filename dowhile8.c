#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int sum;
	int i=1;
	printf("enter the value=");
	scanf("%d",&a);
	
	do
	{
		sum= sum+i;
	    i++;

	}
	while(i<=a);
	printf("sum of first %d numbers = %d",a,sum);


}
