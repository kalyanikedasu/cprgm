#include<stdio.h>
void main()
{
	int n,num,sum,prod;
	printf("Enter a number:");
	scanf("%d",&n);
	sum=0;
	prod=1;
	while(n>0)
	{
		num=n%10;
		sum=sum+num;
		prod=prod*num;
		n=n/10;
	}
	printf("Sum of all digits in the given number is: %d",sum);
   	printf("Product of all digits in the given number is: %d",prod);
}

