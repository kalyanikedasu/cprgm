#include<stdio.h>
void swap_value(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nInside call by value:\n");
	printf("a=%d,b=%d\n",a,b);
}

void swap_reference(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("Inside call by reference:\n");
	printf("a=%d,b=%d\n",*a,*b);
}

int main()
{
	int x,y;

	printf("Enter 2 values:");
	scanf("%d %d",&x,&y);

	printf("\nEntered values are:\n");
	printf("x=%d,y=%d",x,y);

	swap_value(x,y);
		printf("Outside function swap value:\n");
		printf("x=%d,y=%d\n\n",x,y);


	swap_reference(&x,&y);
                printf("Outside function swap reference:\n");
                printf("x=%d,y=%d\n\n",x,y);
}


