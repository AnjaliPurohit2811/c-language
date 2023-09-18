#include<stdio.h>
#include<conio.h>

main()

{
	int a=1;
	int n;
	
	printf("enter the number=");
	scanf("%d",&n);
	
	do
	{
		printf("%d  ",a);
		a++;
	}
	while(a<=n);

	
}
