#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;

	printf("Enter the value of a,b and c = ");
	scanf("%d%d%d",&a,&b,&c);

	
	(a>b)?(a>c)?printf("a is maximum"):("c is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
}
