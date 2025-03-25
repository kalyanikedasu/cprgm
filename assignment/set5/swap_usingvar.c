#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Values before swapping are:\n");
	scanf("%d%d",&a,&b);
	c=b,b=a;
	printf("Values after swapping are:a=%d\tb=%d\n",c,b);
}
