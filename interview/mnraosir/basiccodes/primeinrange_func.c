#include<stdio.h>
int primerange(int n)
{
        for(int i=2;i<n;i++)
        {
                if(n%i==0)
                        return 0;
	}
	return 1;
}
int main()
{
        int n,j,start,end;
	printf("Enter start value of range:");
        scanf("%d",&start);
	printf("Enter end value of range:");
	scanf("%d",&end);
	
	printf("Prime numbers are:");
	for(j=start;j<=end;j++)
	{
        	if(primerange(j))
                	printf("%d ",j);
	}
	printf("\n");
}

