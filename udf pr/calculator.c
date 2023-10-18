#include<stdio.h>

void final()
{
	printf("1.Press 1 for +\n");
	printf("2.Press 2 for -\n");
	printf("3.Press 3 for *\n");
	printf("4.Press 4 for /\n");
	printf("5.Press 5 for %%\n");
	printf("0.Press 0 for the exit\n\n");
	
	int n;
	printf("Enter your choice : ");
	scanf("%d",&n);
	
   if(n!=0)
   {
   	    int a,b;
	    printf("Enter the first number : ");
	    scanf("%d",&a);
	    printf("Enter the second number : ");
	    scanf("%d",&b);
	
	    switch(n)
	    {
		    case 1 : 
		          printf("Adiition of %d and %d is %d",a,b,a+b);break;
		    case 2 : 
		          printf("Substiction of %d and %d is %d",a,b,a-b);break; 
            case 3 : 
		          printf("Multiplication of %d and %d is %d",a,b,a*b);break;
		    case 4 : 
		          printf("Division of %d and %d is %d",a,b,a/b);break;
		    case 5 : 
		          printf("Module of %d and %d is %d",a,b,a%b);break;   
		    case 0 :  
		          printf("Exit !!");   
	    }
   }
	

	
	slash();
	final();
}
	
void slash()
{
	printf("\n\n");
}

main()
{
	final();
}
