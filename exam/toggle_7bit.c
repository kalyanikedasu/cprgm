#include<stdio.h>
void main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);

	n=n^(1<<7);
	printf("After toggling 7th bit:%d\n",n);
}
