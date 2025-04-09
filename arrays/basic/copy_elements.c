#include<stdio.h>
void main()
{
	int i,n,a1[100],a2[100];
	printf("Enter number of elements to be stored:");
	scanf("%d",&n);
	printf("Enter %d numbers",n);
	for(i=0;i<n;i++)
	{
		printf("\nelement-%d:\n",i);
		scanf("%d",&a1[i]);
	}
	printf("The elements stored in the first array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a1[i]);
	}
	printf("The elements copied into second array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a2[i]);
	}
	printf("\n\n");

}
