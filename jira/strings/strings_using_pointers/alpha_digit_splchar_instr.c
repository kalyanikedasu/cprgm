#include<stdio.h>
void main()
{
	char str[100];
	char *p;
	int alpha=0, digit=0, spl=0;

	printf("Enter a string:");
	fgets(str,100,stdin);

	p=str;
	while(*p!='\0' && *p!='\n')
	{
		if((*p>='a' && *p<='z') || (*p>='A' && *p<='Z'))
		{
			alpha++;
		}
		else if(*p>='0' && *p<='9')
		{
			digit++;
		}
		else
		{
			spl++;
		}
	p++;
	}
	printf("No.of alphabets in the string are:%d\n",alpha);
	printf("No.of digits in the string are:%d\n",digit);
	printf("No.of special characters in the string are:%d\n",spl);
}
