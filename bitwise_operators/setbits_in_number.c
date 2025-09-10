#include<stdio.h>
 void main()
{
	int n,count=0;
	printf("Enter a binary number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		if(n&1)
		count++;
		n=n>>1;
	}
	printf("The number of setbits were:%d\n",count);
}

