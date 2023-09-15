#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	int sum;
	int a=1;
	
	printf("enter the value=");
	scanf("%d",&n);
	
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("the sum is =%d",sum);
}
