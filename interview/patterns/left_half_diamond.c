#include<stdio.h>
void main()
{
        int i,j,n;
        printf("Enter number of rows:");
        scanf("%d",&n);

	//for upper half
        for(i=1;i<=n;i++)
        {
                printf("\n");
                for(j=n-i;j>=1;j--)
                {
                        printf("  ");
                }
                for(j=1;j<=i;j++)
                {
                        printf("%d ",j);        
                }
        }

	//for lower half
        for(i=n-1;i>=1;i--)
        {
                printf("\n");
                for(j=n-i;j>=1;j--)
                {
                        printf("  ");
                }
                for(j=1;j<=i;j++)
                {
                        printf("%d ",j);
                }
        }


	 printf("\n");
}

