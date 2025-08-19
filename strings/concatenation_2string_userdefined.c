#include<stdio.h>
void cat(char a[],char b[])
{
	int i=0,j=0;
	while(a[i]) i++;
	a[i++] = ' ';
	while(b[j]) a[i++]=b[j++];
	a[i]='\0';
}
void main()
{
	char s1[50],s2[50];
	printf("Enter first string:");
	scanf("%s",s1);
	printf("Enter second string:");
        scanf("%s",s2);
	cat(s1,s2);
	printf("Concatenated string is:%s\n",s1);
}
