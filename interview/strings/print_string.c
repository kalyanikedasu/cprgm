#include <stdio.h>
void main()
{
	char name[50];

	printf("Enter a string:");
	fgets(name,50,stdin);

	printf("The string you entered is:%s",name);
}

