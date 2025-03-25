#include<stdio.h>
void main()
{
	float c,f;
	printf("Enter temperature in celsius:\n");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("Temperature in fahrenheit is:%.3f",f);
}
