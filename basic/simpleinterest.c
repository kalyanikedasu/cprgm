
#include<stdio.h>
void main( )
{
	float p,t,r,si;
	printf(" Enter p value: ");
	scanf("%f",&p);
        printf("\n Enter t value: ");
        scanf("%f",&t);
        printf("\n Enter r value: ");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("\nSimple Interest si is: %.3f",si);
}

