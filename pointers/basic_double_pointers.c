#include <stdio.h>
void main() 
{
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("Value of a: %d\n", a);
    printf("Value using *p: %d\n", *p);
    printf("Value using **pp: %d\n", **pp);
}

