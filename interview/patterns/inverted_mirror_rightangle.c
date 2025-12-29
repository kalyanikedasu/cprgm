#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter rows:");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		printf("\n");
		for(j=n-i;j>=1;j--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
	}
	printf("\n");
}
