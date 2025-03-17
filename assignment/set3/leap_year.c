#include<stdio.h>
void main()
{
	int N;
	printf("Enter N value:");
	scanf("%d",&N);
	if(N%4==0)
	  printf("It is a leap year.\n");
         else
        	printf("It is not a leap year.\n");
}
