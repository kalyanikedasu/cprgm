#include<stdio.h>
int main(void)
{
	int x=20;
	{
		int x=10;
	//	static int y=22;
		printf("%d\n",x);
	        x=12;	
		printf("%d\n",x);
		x=6;
		printf("%d\n",x);
	/*	{
	                x=15;
			printf("%d\n",x);
		} */
	}
     	printf("%d\n",x);
	printf("%d\n",x);
	return 0;
}
