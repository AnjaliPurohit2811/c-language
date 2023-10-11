#include<stdio.h>
#include<conio.h>

main()

{

	char a[20];
	
	printf("Enter the String : ");
	scanf("%s", &a);
	
	printf("String is : %s\n", a);
	
	int i;
	
	for (i=0; a[i]!=0; i++)
	{
	
		if (i == 0 && (a[i] >= 'a' && a[i] <= 'z'))
		{
			a[i]-=32;
		}
		else if(i != 0 && (a[i] >= 'A' && a[i] <= 'Z'))
		{
				a[i]+=32;
		}
	
	}
	
	printf("Title String : %s", a);

}
