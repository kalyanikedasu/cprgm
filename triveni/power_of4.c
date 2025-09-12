#include<stdio.h>
int powerof4()
{
	int n,x=1;
	while(x<=n)
	{
		if(x==n)
			return 1;
		x=x<<2;
	}
	return 0;
}
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(powerof4)
		printf("The number is power of 4\n");
	else
		printf("The number is not power of 4\n");
	return 0;
}
