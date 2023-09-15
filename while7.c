#include<stdio.h>
#include<conio.h>

main()

{
	int a=2000;
	int b=3000;
	
	while(a<=b)
	{
		if(a%4==0)
		{
			printf("%d",a);
		}
		else
		{
			printf("\n");
		}
		a++;
	}
}
