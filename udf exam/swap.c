#include<stdio.h>

void swap(int a,int b)
{
    int c;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;

	printf("after swapping a=%d\n",a);
	printf("after swapping b=%d",b);
		
}
main()
{
	int a,b;
	swap(a,b);
}