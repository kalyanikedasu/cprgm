#include <stdio.h>
void main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    int sum = 0;
    for (int i = 0; i < 5; i++) 
    {
        sum += *(p + i);
    }
    printf("Sum = %d\n", sum);
}

