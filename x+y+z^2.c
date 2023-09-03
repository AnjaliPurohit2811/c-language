#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z,a;
	
	printf("Enter the value of x and y and z=");
	scanf("%d%d%d",&x,&y,&z);
	
	a = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));

	printf("a=%d",a);
}
