#include <stdio.h>
void main()
{
    char str[50];
    int len = 0, i;
    char temp;
    printf("Enter string: ");
    fgets(str, 50, stdin);
    while(str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }
    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s", str);
}
