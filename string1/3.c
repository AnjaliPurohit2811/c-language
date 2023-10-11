#include<stdio.h>
#include<conio.h>

main()
{

	char a[20];
	int length=0;
	
	printf("Enter the String : ");
	scanf("%s", &a);
	
	printf(" String is : %s", a);
	
	int i;
	for (i=0; a[i]!=0; i++)
	{
		length++;
	}
	printf("Length of String is : %d",length);
}

