#include<stdio.h>
#include<conio.h>

main()
{
	
	int x;
	int y;
	
	printf("the value of x and y=");
	scanf("%d%d",&x,&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("after swapping\n");
	printf("the value of x:%d\n",x);
	printf("the value of y:%d",y);
}
