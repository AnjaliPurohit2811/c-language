#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z;
	
	printf("Enter the value of x and y=");
	scanf("%d%d",&x,&y);
	
	z =   (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	printf("z=%d",z);
}
