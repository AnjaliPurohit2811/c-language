#include<stdio.h>

int main() {

   int n,i,j,p,sum = 0;

   printf("Enter size of an array:");
   scanf("%d", &n);

   int a[n];
   for (i=0; i<n; i++) 
   {
   	   printf("Enter a[%d]:",i);
       scanf("%d", &a[i]);
   }

   for (i = 0; i < n; i++) {
       j = 2;
       p = 1;
       while (j<a[i]) 
	   {
           if (a[i]%j==0) 
		   {
               p=0;
               break;
           }
           j++;
       }
       if (p==1)
       {
       	sum = sum + a[i];
	   }
   }
   
   printf("Sum of prime numbers:%d", sum);

}