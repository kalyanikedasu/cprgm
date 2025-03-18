#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter number of years:");
	scanf("%d",&n);
	for( i=1;i<n;i++)
	{
         if (( i%4==0)&&(i%100!=0)||(i%400==0))
	printf("%d\t",i);
	}
}
