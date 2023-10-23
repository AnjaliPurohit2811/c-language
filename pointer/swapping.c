#include<stdio.h>

void swapping(int *a, int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	
	printf("a=%d\n b=%d",*a,*b);
}

main()
{
	int a,b;
	printf("enter the value of a and b=");
	scanf("%d\n%d",&a,&b);
	
	swapping(&a,&b);
}