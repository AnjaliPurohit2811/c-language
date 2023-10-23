#include<stdio.h>
#include<string.h>
int main() {

    char a[30], * p;
    int count;

    printf("Enter any string: ");
    gets(a);
    p = a;
    count = 0;

    while ( *p != '\0') {
        count++;
        p++;
    }

    printf("The length of the string is: %d", count);


}
