#include<stdio.h>

void cube()
{
	int a;
	int cube;
	
	printf("enter the value=");
	scanf("%d",&a);
	
	cube=a*a*a;
	
	printf("cube = %d",cube);
	
}

main()
{
	cube();
}