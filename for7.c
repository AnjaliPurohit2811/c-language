#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	
	printf("enter the year=");
	scanf("%d",&a);
	
	for(a; a<=3000; a++)
	{
		if(a%4==0)
		{
			printf("%d\n",a);
		}
		else
		{
			printf("-\n");
		}

	}
	
}

