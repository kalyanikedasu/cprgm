#include<stdio.h>
void main()
{
	int a[3]={1,2,3};
	int b[3]={4,5,6};
	int c[6];
	int i,j;
	for(i=0;i<3;i++)
		c[i]=a[i];
	for(j=0;j<3;j++)
		c[i+j]=b[j];
	printf("Merged array:");
	for(i=0;i<6;i++)
		printf("%d",c[i]);
	printf("\n");
}
