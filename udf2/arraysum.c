#include<stdio.h>
#include<string.h>

int arraysum(int *a, int n)
{
	int i;
	int sum=0;
	
	for(i=0; i<n; i++)
	{
		sum = sum+a[i];
	}
	return sum;
}

int main()
{
	int n;
	
	printf("enter the size=");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int final;
	
	for(i=0; i<n; i++)
	{
	printf("enter the elements a[%d] = ",i);
	scanf("%d",&a[i]);
    }
	
    final= arraysum(a,n);
    printf("the final sum= %d",final);
	
	return 0;
	
}
	
