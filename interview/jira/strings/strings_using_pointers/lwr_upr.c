#include<stdio.h>
void main()
{
	char str[100];
	char *p;

	printf("Enter a string:");
	fgets(str,100,stdin);

	p=str;

	while(*p!='\0' && *p!='\n')
	{
		if(*p>='a' && *p<='z')
		{
			*p=*p-32;
		}
		p++;
	}
	printf("String in uppercase is:%s",str);
}


