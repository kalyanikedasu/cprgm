#include<stdio.h>
void main()
{
	char str[100];
	char *p;
	int count=0;

	printf("Enter a string:");
	fgets(str,100,stdin);

	p=str;
	while(*p!='\0' && *p!='\n')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
		   *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
		{
			count++;
		}
	p++;
	}
	printf("Vowel count in the given string is:%d\n",count);
}
