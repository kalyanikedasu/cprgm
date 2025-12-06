#include<stdio.h>
void main ()
{
	char str[200],word[50];
	char *p1,*p2;
	int count=0;

	printf("Enter a string:");
	fgets(str,200,stdin);

	printf("Enter a word:");
	fgets(word,50,stdin);

	p2=word;
	while(*p2!='\0' && *p2!='\n')
	{
		p2++;
	}
	*p2='\0';

	p1=str;
	while(*p1!='\0')
	{
		p2=word;
		while(*p1==*p2 && *p2!='\0')
		{
			p1++;
			p2++;
		}
		if(*p2=='\0')
		{
			count++;
		}
		p1++;
	}
	printf("Word frequency in string is:%d\n",count);
}
