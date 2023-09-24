#include<stdio.h>
#include<conio.h>

main()

{
	char ch='a';
	
	
	printf("alphabet from a to z =");
	scanf("%c",&ch);
	
	do
	{
		printf("%c  ",ch);
		
		ch++;
	}
	while(ch<='z');
}
