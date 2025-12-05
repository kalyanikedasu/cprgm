#include <stdio.h>

int main()
{
    char str[100];
    int i, j, len = 0, start = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // ✅ Your common length line
    while (str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }

    printf("The reversed output is: ");

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || i == len)
        {
            for (j = i - 1; j >= start; j--)
            {
                printf("%c", str[j]);
            }

            printf(" ");
            start = i + 1;
        }
    }

    printf("\n");
    return 0;
}

