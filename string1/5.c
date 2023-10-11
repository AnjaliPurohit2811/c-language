#include<stdio.h>
#include<conio.h>

main()
{

	char a[20];
	
	puts("enter the string=");
	gets(a);
	
	if(a[0]>=97)
	{
		a[0]-=32;
	}
	
	int i;
	int len=strlen(a);
	for(i=0; i<len; i++)
	{
		if(a[i]==' ')
		{
			if(a[i+1]<=97)
			{
				a[i+1]+=32;
			}
		}
	}
	puts(a);
}
