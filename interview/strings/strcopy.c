#include<stdio.h>
void main()
{
	char a[5],b[5];
	
	printf("Enter a string:");
	fgets(a,5,stdin);
	strcpy(b,a);
	printf("Copied string is:%s",b);
}
