#include<stdio.h>
void main()
{
        int i,j,n;
        printf("Enter rows:");
        scanf("%d",&n);

        //for upper part
        for(i=1;i<=n;i++)
        {
                printf("\n");
                for(j=1;j<=i;j++)
                {
                        printf("%d ",j);
                }
        }
	printf("\n");
}
