#include<stdio.h>
#include<conio.h>

main()
{
	int n,a,fact;
	fact=a=1;
	
	printf("enter the value=");
	scanf("%d",&n);
	
	while(a<=n)
	{
		fact=fact*a;
		a++;
	}
	printf("the factorial is = %d",fact);
}
