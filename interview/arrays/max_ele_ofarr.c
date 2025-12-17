#include<stdio.h>
void main()
{
	int i,n,max;
	int a[100];

	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Max element in the array is:%d\n",max);
}
