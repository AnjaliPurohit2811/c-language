#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int n=0;
	
	printf("enter the value =");
	scanf("%d",&a);
	
	for(a; a!=0; n++)
	{
	     a=a/10;
	}
	 	printf("total=%d",n);
}
