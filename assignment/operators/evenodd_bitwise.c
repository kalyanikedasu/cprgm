#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value");
	scanf("%d",&n);
	if(n&1)
		printf("Odd number");
	else
		printf("Even number");
}

