#include<stdio.h>
void main()
{
        int a[5]={11,22,35,67,88};
        int max=a[0];
        for(int i=1;i<5;i++)
        {
                if(a[i]>max)
                        max=a[i];
        }
        printf("Maximum value is:%d\n",max);
}

