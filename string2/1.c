#include<stdio.h>
#include<string.h>

main()
{
	int n;
	
	printf("enter the size=");
	scanf("%d",&n);
	
	char a[n];
	
	printf("enter the string=");
	scanf("%s",&a);
	
    int i,j;
    int count;
	
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
	 		    a[j]=-1;
	 		    count++;
			}
		}
		if(a[i]!=-1)
		{
			printf(" %c : %d\n",a[i],count);
	    }
	}	
}
