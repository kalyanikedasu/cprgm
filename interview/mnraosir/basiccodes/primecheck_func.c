#include<stdio.h>
int primecheck(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void main()
{
	int n;
	scanf("%d",&n);
	if(primecheck(n))
		printf("Prime number\n");
	else
		printf("Not a prime number\n");
}


