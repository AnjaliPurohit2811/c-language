#include<stdio.h>
#include<conio.h>

main()
{
	char day;
	
	printf("Enter the character : ");
	scanf("%c",&day);
	
	switch(day)
	{
		case 'M' : printf("Monday");break;
		case 'T' : printf("Tuesday");break;
		case 'W' : printf("Wednesday");break;
		case 't' : printf("Thursday");break;
		case 'F' : printf("Friday");break;
		case 's' : printf("Saturday");break;
		case 'S' : printf("Sunday");break;
	}
}
