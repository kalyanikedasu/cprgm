#include <stdio.h>
void main()
{
    char str[50];
    int len = 0;
    int i,j,temp;
    printf("Enter string: ");
    fgets(str, sizeof str, stdin);
    while(str[len]!='\0' && str[len]!='\n')
    {
        len++;
    }

    j = len-i-1;

    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string: %s", str);
}

