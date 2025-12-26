#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	
	printf("Enter one string:");
	fgets(str1,50,stdin);

	printf("Enter another string:");
	fgets(str2,50,stdin);

	str1[strlen(str1)-1]='\0';

	strcat(str1,str2);

	printf("String after concatenation is:%s",str1);
	
}
