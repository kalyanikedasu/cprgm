#include <stdio.h>
#define SQUARE_MACRO(x) ((x) * (x))
int square_function(int x) 
{
    return x * x;
}
void main() 
{
    int num = 5;
    printf("Using Macro: %d\n", SQUARE_MACRO(num));
    printf("Using Function: %d\n", square_function(num));
    num = 5;
    printf("\nMacro with ++num: %d\n", SQUARE_MACRO(++num)); 
    num = 5;
    printf("Function with ++num: %d\n", square_function(++num)); 
}

