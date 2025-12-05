#include<stdio.h>
void main()
{
	char str[100];
	int i=0,len=0;

	printf("Enter a string:");
	fgets(str,100,stdin);

	while(str[len]!='\0' && str[len]!='\n')
	{
		len++;
	}

	printf("The reversed output is:");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
