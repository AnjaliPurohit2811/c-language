#include<stdio.h>
#include<conio.h>

main()

{
	
	int x;
	int y;
	int z;
	
	printf("the value of x:");
	scanf("%d",&x);
	
	printf("the value of y:");
	scanf("%d",&y);
	
	z=(x*x)-(2*x*y)+(y*y);
	
	printf("z=%d",z);
}
