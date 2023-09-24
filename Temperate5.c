#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int f,i;
	f=i=1;
	printf("enter the number=");
	scanf("%d",&a);
	
	for(a; i<=a; i++)
	{
		f=f*i;
	}
	printf("the factorial of %d is= %d",a,f);


}	
