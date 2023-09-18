#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	
	printf("enter the year=");
	scanf("%d",&a);
	
	do
	{
		if(a%4==0)
		{
			printf("%d\n",a);
		}
		else
		{
			printf("-\n");
		}
		a++;
		

	}
	while(a<=3000);

}
