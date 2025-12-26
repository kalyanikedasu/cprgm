#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int len;
	
	printf("Enter a string:");
	fgets(str,50,stdin);

	len=strlen(str);

	printf("Length of string is:%d\n",len -1);
}
