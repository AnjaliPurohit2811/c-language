#include<stdio.h>
#include<string.h>

main()
{
	char a[30];
	
	puts("enter the string=");
	gets(a);
	
	int i,j,k;
	int length;
	
	length= strlen(a);
	
	for(i=0; i<length; i++)
	{
		for(j=0; j<length; j++)
		{
		    if(a[j]>='A' && a[j]<='Z' || a[j]>='a' && a[j]<='z')
			{
				for(k=j; k<length; k++)
				{
					a[k]=a[k+1];
				}
				length--;
			}	
		}
	}
	printf("after removel of alphabets=%s",a);
	
	
}