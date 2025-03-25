#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter values");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The values after swapping are a=%d\tb=%d\n",a,b);
}
