#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z;
	
	printf("Enter the value of x and y=");
	scanf("%d%d",&x,&y);
	
	z=  (x*x) + (2*x*y) + (y*y);
	
	printf("z=%d",z);
}
