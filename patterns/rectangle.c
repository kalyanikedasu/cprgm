#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)	// or for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)	//if i is like above comment format then for(j=1;j<=2*n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
