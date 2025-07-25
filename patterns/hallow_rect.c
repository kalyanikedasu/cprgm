#include<stdio.h> 
void main()
{
	int n,i,j;
	printf("Enter rows:\n");
	scanf("%d",&n);
/*	printf("Enter columns:\n");
	scanf("%d",&m);*/
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(i==1||i==n||j==1||j==2*n)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
