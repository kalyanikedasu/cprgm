#include<stdio.h>
void main()
{
	char str[100];
	char *p,*j,*start;

	printf("Enter any sentence:");
	fgets(str,100,stdin);

	p=str;
	start=str;

	printf("Reversed sentence is:");

	while(*p!='\0' && *p!='\n')
	{
		if(*p==' ')
		{
			for(j=p-1;j>=start;j--)
			{
				printf("%c",*j);
			}
			printf(" ");
			start=p+1;
		}
		p++;
	}
	for(j=p-1;j>=start;j--)
	{
		printf("%c",*j);
	}
	printf("\n");
}
