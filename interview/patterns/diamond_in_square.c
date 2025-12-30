#include<stdio.h>
void main()
{
	int i,j;

	//for upper half
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		for(j=1;j<=i-1;j++)
                {       
                        printf("  ");
                }  
		for(j=1;j<=i-1;j++)
                {
			if(j==1)
				continue;
                        printf("  ");
                }
		for(j=i;j<=5;j++)
                {
			if(j==1)
				continue;
                        printf("%d ",j);
                }
		printf("\n");
	}

	//for lower half
        for(i=5-1;i>=1;i--)
        {
                for(j=5;j>=i;j--)
                {
                        printf("%d ",j);
                }
                for(j=1;j<=i-1;j++)
                {
                        printf("  ");
                }
                for(j=1;j<=i-1;j++)
                {
                        if(j==1)
                                continue;
                        printf("  ");
                }
                for(j=i;j<=5;j++)
                {
                        if(j==1)
                                continue;
                        printf("%d ",j);
                }
                printf("\n");
        }

}
