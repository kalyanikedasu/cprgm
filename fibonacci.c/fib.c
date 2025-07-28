#include<stdio.h>
void main()
{
	int i,n;
	int a=0,b=1,c;
	printf("Enter number of terms:\n");
	scanf("%d",&n);
	printf("Fibonacci series\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");

}
