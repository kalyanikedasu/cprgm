#include<stdio.h>
#include<string.h>
void my_strncat(char dest[],char src[],int n)
{
	int i=0,j=0;
	while(dest[i]!='\0')
	{
		i++;
	}
	while(j<n&&src[j]!='\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';
}
void main()
{

  /*	char dest[10]="Satya";
	char src[]="kalyani";
	my_strncat(dest,src,5);
	printf("Result is:%s\n",dest);  */

	//the below is giving input at runtime//

	char dest[50],src[50];
	int n;
	printf("Enter first string:");
	scanf("%s",dest);
	printf("Enter second string:");
	scanf("%s",src);
	printf("Enter number of characters to be appended from second string:");
	scanf("%d",&n);
	my_strncat(dest,src,n);
	printf("The result is:%s\n",dest);
}
