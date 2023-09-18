#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int f,i;
	f=i=1;
	printf("enter the number=");
	scanf("%d",&a);
	
	do
	{
		f=f*i;
		i++;

	}
	while(i<=a);
	
	printf("the factorial of %d is= %d",a,f);


}
