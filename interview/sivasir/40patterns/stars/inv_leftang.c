#include<stdio.h>
void main()
{
        int i,j,n;
        printf("Enter no.of rows:");
        scanf("%d",&n);

        for(i=n;i>=1;i--)
        {
                printf("\n");
                for(j=1;j<=n-1;j++)
                {
                        printf("  ");
                }
                for(j=i-1;j<=1;j--)
                {
                        printf("* ");
                }
        printf("\n");
        }
}

