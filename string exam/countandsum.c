#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	puts("enter the string=");
	gets(a);
	
	int i,sum=0;
	int count=0;
	
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='0') && (a[i]<='9'))
		{
			count++;
			sum+=(a[i]-'0');
		}
	}
    printf("the number of digits=%d\n",count);
	printf("sum is=%d",sum);
}
