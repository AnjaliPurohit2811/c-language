#include <stdio.h>
#include <string.h>

main()
{
    char a[50];
    int alpha=0;
    int digit=0;
    int spcl=0;

	
       printf("enter the string : ");
       gets(a);
	   
	   int i;	

    for(i=0;a[i];i++)  
    {
        if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122) )
        {
        	 alpha++;
		}
        else if(a[i]>='0' && a[i]<='9')
        {
		      digit++;	
		}
        else
        {
        	spcl++;
		}
         
 
 	}
    printf("Number of Alphabets in the string is : %d\n", alpha);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", spcl);
}
