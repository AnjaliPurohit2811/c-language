#include<stdio.h>


main()
{
    int n;
    printf("enter the size=");
    scanf("%d",&n);
    
    int a[n],i;
    int length = sizeof(a) / sizeof(a[0]);
    int *reverse[length];

    for(i=0;i<length;i++)
    {
    	printf("a[%d]:",i);
    	scanf("%d",&a[i]);
	}
    int j = length - 1;
    for (i=0; i<length; i++)
    {
        reverse[i]=&a[j];
        j--;
    }
    printf("Reverse is =");
    for (i=0; i<length; i++)
    {
        printf("%d ",*reverse[i]);
    }
}
