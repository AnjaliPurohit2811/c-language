#include<stdio.h>
#include<string.h>

main()
{
	char a[30];
	
	puts("enter the string=");
	gets(a);
	
	int i,j;
	int length;
	
	length= strlen(a);
	
	for(i=0; i<length; i++)
	{
		if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'
		|| a[i]=='u')
		{
			for(j=i; j<length; j++)
			{
				a[j]=a[j+1];
			}
			i--;
			length--;
		}
	}
	printf("after removel of vowels=%s",a);
	
	
}