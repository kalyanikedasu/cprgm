#include <stdio.h>
void main()
{
    char str[50];
    int len = 0, flag=1;
    int i,j;
    printf("Enter string: ");
    fgets(str, sizeof str, stdin);
    while(str[len]!='\0' && str[len]!='\n')
    {
        len++;
    }

    for(i = 0; i < len / 2; i++)
    { 
	j=len-i-1;
        if(str[i]!=str[j])
	{
		flag=0;
		break;
	}
    }
    if(flag)
	    printf("String is palindrome\n");
    else
	    printf("String is not palindrome\n");
}


