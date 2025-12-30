#include<stdio.h>
void main()
{
	int i,j;

	//for upper half
	for(i=5;i>=1;i--)
	{
		for(j=i-1;j>=1;j--)	//for upper left spaces
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)	//for uppper left triangle
		{
			printf("%d ",j);
		}
		for(j=i+1;j<=5;j++)	//for uppper right triangle
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	//for lower half
	for(i=2;i<=5;i++)
        {
                for(j=i-1;j>=1;j--)     //for upper left spaces
                {
                        printf("  ");
                }
                for(j=5;j>=i;j--)       //for uppper left triangle
                {
                        printf("%d ",j);
                }
                for(j=i+1;j<=5;j++)     //for uppper right triangle
                {
                        printf("%d ",j);
                }
                printf("\n");
        }

	
}
