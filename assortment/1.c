#include<stdio.h>
#include<conio.h>

main()
{
   int i,j,k,n;
   printf("enter tha size of array:");
   scanf("%d",&n);
   int a[n];
   printf("enter tha elements of array.\n");
   for(i=0; i<n; i++)
   {
   	    printf("a[%d]=",i);
   	    scanf("%d",&a[i]);
   }
   for(i=0; i<n; i++)
   {
   	    for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
            	for(k=j; k<n; k++)
                {
                	a[k]=a[k+1];
				}
				j--;
				n--;
			}
        }
   }
   printf("after remove all duplicate values in the array:");
   for(i=0; i<n; i++)
   {
   	   printf("%d  ",a[i]);
   }
   
   
}
