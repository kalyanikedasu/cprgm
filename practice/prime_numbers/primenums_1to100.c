#include<stdio.h>
void main()
{
	int n,i;
	printf("Prime numbers from 1 to 100 are:\n");
	for(n=2;n<=100;n++)
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			break;
		}
	if(i>n/2)	
		printf("%d\t",n);
	}
	printf("\n");
}
