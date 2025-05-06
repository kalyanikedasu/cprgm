#include<stdio.h>
#include<string.h>
int main()
{
        char str[50],temp='\0';
        printf("Enter the string:\n");
        fgets(str,50,stdin);
        str[strcspn(str,"\n")]='\0';
        printf("%s\n",str);
        int k=strlen(str);
        for(int i=0,j=k-1;i<=j;i++,j--)
        {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
        }
        printf("Reversed string:%s\n",str);
        return 0;
}
