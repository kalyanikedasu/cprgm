#include<stdio.h>
#define pi 3.14159f
void main()
{
        printf("----Using #define----\n");
	int r=5;
	float area=pi*r*r;
	printf("Area of circle is:%f\n",area);
}



/*#include<stdio.h>
void main()
{

	printf("----Using const----\n");
	int r=5;
	const float pi=3.14159,area=pi*r*r;
	printf("Area of circle is:%f\n",area);
}*/
