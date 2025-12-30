#include<stdio.h>
void main()
{
	int i,j;

	//for upper half
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d ",i);
		}
		for(j=i;j<5;j++)
		{
		 	printf("%d ",i);
		}
		printf("\n");
	}

	//for lower half
        for(i=5-1;i>=1;i--)
        {
                for(j=1;j<i;j++)
                {
                        printf("  ");
                }
                for(j=i;j<=5;j++)
                {
                        printf("%d ",i);
                }
                for(j=i;j<5;j++)
                {
                        printf("%d ",i);
                }
                printf("\n");
        }

}
