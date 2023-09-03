#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z;
	
	printf("Enter the value of x and y=");
	scanf("%d%d",&x,&y);
	
	z =  (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("z=%d",z);
}
