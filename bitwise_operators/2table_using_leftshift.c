#include<stdio.h>
int mul(int a, int b)
{
	int res=0;
	while(b>0)
	{
		if(b&1)
			res=res+a;
		a <<= 1;
                b >>= 1;
	}
	return res;
}
void main()
{
	int i;
	for(i=1;i<=12;i++)
	{
		int res=mul(2,i);
		printf("2*%d=%d\n",i,res);
	}
}
