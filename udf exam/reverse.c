#include<stdio.h>

void reverse(int x,int i)
{
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
main()
{
	int x,i;
	reverse(x,i);
}