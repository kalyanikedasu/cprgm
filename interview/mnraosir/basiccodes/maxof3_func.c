#include<stdio.h>
int maxof3(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}

int main()
{
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	printf("Max of 3numbers is:%d",maxof3(a,b,c));
	printf("\n");
}
