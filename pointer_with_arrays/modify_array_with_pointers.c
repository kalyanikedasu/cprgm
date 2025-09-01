#include <stdio.h>
void main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // pointer to first element
    printf("Original array:\n");
    for (int i = 0; i < 5; i++) 
        printf("%d ", *(ptr + i));
    // Modify array using pointer
    for (int i = 0; i < 5; i++)
        *(ptr + i) = *(ptr + i) * 2;  // double each element
    printf("\nArray after doubling using pointer:\n");
    for (int i = 0; i < 5; i++)
    { 
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

