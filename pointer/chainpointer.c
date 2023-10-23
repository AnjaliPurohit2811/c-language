#include<stdio.h>
main()
{
	int a=10;
	int*p=&a;
	int**ptr=&p;
	int *chain=&ptr;
	
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	printf("%d\n",**ptr);
	printf("%d\n",chain);
	
}
