#include<stdio.h>
#include<conio.h>

void swap(int *x, int* y) 
{
int k = *x;
*x = *y;
*y = k;
}

int main() {


int x,y;

printf("before swap x and y=");
scanf("%d%d",&x,&y);

swap(&x, &y);

printf("Swapped numbers: x = %d, y = %d\n", x, y);



}
