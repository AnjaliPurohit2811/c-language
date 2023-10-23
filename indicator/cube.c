#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of array of size:");
	scanf("%d",&n);
	int a[n][n];
	int *p[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			p[i][j]=&a[i][j];
			printf("%d ",(*p[i][j])*(*p[i][j])*(*p[i][j]));
		}
	}
}
