#include<stdio.h>
void main()
{
	char str[50];
	char *p=str;
	int count=0;
	printf("Enter a string:");
	scanf("%s",str);
	p=str;
	while(*p)
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
                   *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            count++;
        p++;
	}
	printf("Total number of vowels:%d\n",count);
}
