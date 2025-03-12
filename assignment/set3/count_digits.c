#include<stdio.h>
void main()
{
	int count=0,n=0;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n==0)
		count=1;
	while(n!=0)
	{

		count++;
		n=n/10;
	}
	printf("Total digit count in the given number is:%d\n",count);
}
