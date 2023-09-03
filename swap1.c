#include<stdio.h>
#include<conio.h>

main()
{
	
	int x;
	int y;
	int k;
	printf("the value of x, y=");
	scanf("%d%d",&x,&y);
	
	k=x;
	x=y;
	y=k;
	
	printf("after swapping : x=%d, y=%d",x,y);
}
