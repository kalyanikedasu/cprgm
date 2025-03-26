#include<stdio.h>
#define ele 5
void main()
{
	int arr[ele],i;
	for(i=0;i<ele;i++)
	{
		printf("Enter the values for arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<ele;i++)
		printf("%d\n",arr[i]);
}

