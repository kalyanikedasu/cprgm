#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		//n=n%10;
		sum=sum+n%10;
		n=n/10;
	}
	printf("Sum of digits=%d\n",sum);
}
