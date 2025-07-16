#include<stdio.h>
struct pointer
{
	int x,y,z;
};
int main()
{
	struct pointer p={1,2,3};
	struct pointer*ptr=&p;
	printf("%d\t%d\t%d\n",ptr->x,ptr->y,ptr->z);
return 0;
}
