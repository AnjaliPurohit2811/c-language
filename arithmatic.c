#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	int sum,sub,multi,div,mod;
	
	printf("enter the value of a,b = ");
	scanf("%d%d",&a,&b);
	
	sum = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;
    mod = a % b;
    
    printf("SUM = %d\n", sum);
    printf("SUB = %d\n", sub);
    printf("MULTIPLACTION = %d\n", multi);
    printf("DIVIDE = %d\n", div);
    printf("MODULUS = %d", mod);

}
