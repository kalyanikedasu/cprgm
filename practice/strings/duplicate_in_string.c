#include <stdio.h>
void main()
{
    char str[100];
    int i, j, k;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
     {
        for (j = i + 1; str[j] != '\0'; j++)
         {
            if (str[i] == str[j])
             {
                for (k = j; str[k] != '\0'; k++)
                 {
                    str[k] = str[k + 1];   // shift left
                 }
                j--; // stay on same index
             }
         }
     }
    printf("After removing duplicates: %s\n", str);
}

