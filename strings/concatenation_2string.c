#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100];
	char str2[100];
	printf("Enter a string:\n");
	scanf("%s",str1);
	printf("Enter string to be appended:\n");
	scanf("%s",str2);
	strcat(str1,str2);
	printf("After concatenating strings:%s\n",str1);
}
