#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int val=1;
		for(j=0;j<n-i-1;j++)
		printf("   ");//3spaces 
		for(j=0;j<=i;j++)
		{
			printf("%3d   ",val);//3spaces
			val=val*(i-j)/(j+1);
		}
		printf("\n");
	}
}
