#include<stdio.h>
void main()
{
	int n,i,arr[100];
	printf("Enter number of elements to be print:");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
