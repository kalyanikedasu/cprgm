#include<stdio.h>
int main()
{
        int a,ele,i;
        printf("Enter the number of elements in array:\n");
        scanf("%d",&a);
        int arr[a];
        printf("Enter the elements of array:\n");
        for(i=0;i<a;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Enter the element to insert:\n");
        scanf("%d",&ele);
        for(i=a-1;i>0;i--)
        {
                if(arr[i-1]<ele && arr[i]>ele)
                {
                        break;
                }
        }
        for(int j=a;j>i;j--)
        {
                arr[j]=arr[j-1];
        }
        arr[i]=ele;
        printf("Array after inserting element:\n");
        for(int i=0;i<=a;i++)
        {
                printf("%d ",arr[i]);
        }
        printf("\n");
        return 0;
}
