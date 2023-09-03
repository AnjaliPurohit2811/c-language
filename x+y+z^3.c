#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z,a;
	
	printf("Enter the value of x and y and z=");
	scanf("%d%d%d",&x,&y,&z);
	
	a = (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
	
	printf("a=%d",a);
}
