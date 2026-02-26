#include <stdio.h>
void main()
{
    char str1[50],str2[50];
    int i;

    printf("Enter string1: ");
    fgets(str1, sizeof str1, stdin);//scanf("%s",&str1);
    printf("Enter string2: ");
    fgets(str2, sizeof str2, stdin);//scanf("%s",&str2);

    for(i = 0; str1[i]!='\0' && str2[i]!='\0'; i++)
    {
        if(str1[i]!=str2[i])
        {
                printf("Strings are not equal\n");
		return 0;
        }
    }
    if(str1[i]=='\0' && str2[i]=='\0')
            printf("Strings are equal\n");
    else
            printf("Strings are not equal\n");
}

