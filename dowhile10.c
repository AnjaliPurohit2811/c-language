#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int n=1;
	
	printf("enter the value=");
	scanf("%d",&a);
	
	do
	{
		printf("%d * %d= %d\n",a,n,a*n);
		n++;
	}
	while(n<=10);

}
