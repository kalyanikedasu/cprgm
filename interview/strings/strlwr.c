#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	printf("Enter a string:");
	fgets(str,50,stdin);

	str[strlen(str)-1]='\0';
	
	strlwr(str);

	printf("In lowercase:%s\n",str);
}
