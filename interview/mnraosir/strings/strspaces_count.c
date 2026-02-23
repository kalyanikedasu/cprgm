#include<stdio.h>
void main()
{
        int i, len=0, count=0;
        char str[50];

        printf("Enter string:");
        fgets(str,50,stdin); //for more than 1word
       // scanf("%s",str);  //for only 1word

        while(str[len]!='\0' && str[len]!='\n')
        {
                len++;
        }

        for(i=0;str[i]!='\0';i++)
        {
                if(str[i]==' ')
                count++;
        }
        printf("Spaces count is:%d",count);
        printf("\n");
}

