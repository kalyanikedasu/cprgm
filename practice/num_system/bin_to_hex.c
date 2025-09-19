#include <stdio.h>
#include <string.h>
void main() 
{
    char bin[100];
    int dec = 0, i;
    printf("Enter binary: ");
    scanf("%s", bin);
    // binary -> decimal
    for (i = 0; bin[i]; i++)
        dec = dec * 2 + (bin[i] - '0');
    // decimal -> hex (printf handles it)
    printf("Hexadecimal: %X\n", dec);
}


