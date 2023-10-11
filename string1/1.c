#include<stdio.h>

main()

{
	char a[26];
	
	printf("enter a string=");
	scanf("%s",&a);
	
	int i;
	for(i=0; a[i]!=0; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]= a[i]-32;
		}
	}
	printf("uppercase= %s",a);
}