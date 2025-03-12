#include<stdio.h>
void main( )
{
	float n1,n2,sum,avg;
	printf("Enter n1:");
	scanf("%f",&n1);
	printf("Enter n2:");
	scanf("%f",&n2);
	sum=n1+n2;
	avg=(sum)/2;
	printf("sum of %f and %f  is: %f\n",n1,n2,sum);
	printf("avg of %f and %f is: %.2f",n1,n2,avg);
}
