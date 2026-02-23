#include<stdio.h>
void main()
{
        int i, len=0, count=0;
        char str[50];

        printf("Enter string:");
        //fgets(str,50,stdin); //for more than 1word
        scanf("%s",str);  //for only 1word

        while(str[len]!='\0' && str[len]!='\n')
        {
                len++;
        }

        for(i=0;str[i]!='\0';i++)
        {
                if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		count++;
        }
	printf("Vowel count is:%d",count);
	printf("\n");
}


