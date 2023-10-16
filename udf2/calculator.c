#include<stdio.h>

void sum(int a,int b)
{
	printf("a+b=%d\n",a+b);
	cal();
}
void sub(int a,int b)
{
	printf("a-b=%d\n",a-b);
	cal();
}
void mul(int a,int b)
{
	printf("a*b=%d\n",a*b);
	cal();
}
void divide(int a,int b)
{
	printf("a/b=%d\n",a/b);
	cal();
}
void cal()
{
	char calc;
	int a,b;
	printf("enter the value:");
	scanf(" %c",&calc);
	printf("enter the a & b:");
	scanf("%d %d",&a,&b);
	switch(calc)
	{
		case '+':sum(a,b);break;
		case '-':sub(a,b);break;
		case '*':mul(a,b);break;
		case '/':devide(a,b);break;
		default : printf("enter the correct!");
	}
}

int main()
{
	cal();
	return 0;
}
