#include <stdio.h>
void main()
{
    int arr[3] = {10, 20, 30};  // Array of 3 integers
    int *ptr = arr;             // Pointer to the first element

    printf("-------------Addresses---------------\n\n");
    printf("Address of arr[0]: %p\n", &arr[0]);
    printf("Pointer ptr       : %p\n\n", ptr);

    printf("-------------values---------------\n\n");
    printf("First element using pointer: %d\n", *ptr);
    printf("Second element using pointer: %d\n", *(ptr + 1));
    printf("Third element using pointer: %d\n", *(ptr + 2));
}

