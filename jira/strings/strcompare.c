#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],b[50];

	printf("Enter 1st string:");
	fgets(a,50,stdin);

	printf("Enter 2nd string:");
	fgets(b,50,stdin);

	if(strcmp(a,b)==0)
		printf("Same\n");
	else
		printf("Not same\n");
}
