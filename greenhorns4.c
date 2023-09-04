#include<stdio.h>
#include<conio.h>

main()
{
	int grosssalary;
	int basic=100;
	int hra=10;
	int da=5;
	int ta=8;
	
	hra=(basic*10)/100;
	da=(basic*5)/100;
	ta=(basic*8)/100;
	
	grosssalary=basic+hra+da+ta;
	
	printf("gross salary= %d",grosssalary);
	
	
}
