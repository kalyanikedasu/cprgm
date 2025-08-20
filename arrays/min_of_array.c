#include<stdio.h>
void main()
{
	int a[5]={11,22,35,67,88};
	int min=a[0];
	for(int i=1;i<5;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("Minimum value is:%d\n",min);
}
		
