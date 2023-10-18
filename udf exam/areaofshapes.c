#include<stdio.h>

int areaoftriangle(int b, int h)
{
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter the value of h=");
	scanf("%d",&h);
	int a= b*h/2;
	printf("area of triangle= %d",a);
}
float areaofcircle(int r)
{
	printf("enter the value of r=");
	scanf("%d",&r);
	float a= 3.14 * r*r;
	printf("area of circle= %lf",a);
}
int areaofractangle(int w, int l)
{
	printf("enter the value of w=");
	scanf("%d",&w);
	printf("enter the value of l=");
	scanf("%d",&l);
	int a= w*l;
	printf("area of rectangle=%d",a);
}
int areaofsquare(int s)
{
	printf("enter the value of s=");
	scanf("%d",&s);
	int a= s*s;
	printf("area of square=%d",a);
}
main()
{
	int x;
	int b,h,a,r,w,l,s;
	printf("enter the value=");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1: areaoftriangle(b,h); break;
		case 2: areaofcircle(r); break;
		case 3: areaofractangle(w,l); break;
		case 4: areaofsquare(s); break;
	}
}


