#include<stdio.h>

main()
{
	int x,i;
	
	
	printf("enter the size : ");
	scanf("%d",&x);
	
	char a[x];
	
	printf("enter the string = ");
	scanf("%s",&a);
	
	for(i=x; i>=0; i--)
	{
	    printf("%c",a[i]);
	}
	
	
	
}