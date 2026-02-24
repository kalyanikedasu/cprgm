#include<stdio.h>
void main()
{
        int i,j,n;
        printf("Enter no.of rows:");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
		printf("\n");
                for(j=n-i;j>=1;j--)
                {
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
                        printf("* ");
                }
        printf("\n");
        }
}

