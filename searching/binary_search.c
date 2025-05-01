#include <stdio.h>
int binarysearch(int a[], int n, int data) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (data == a[mid])
            return mid;
        else if (data < a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
void main()
{
	int a[]={1,2,3,4,5};
	int key;
	printf("Enter the key\n");
	scanf("%d",&key);
	int i =binarysearch(a,5,key);
	if(i== -1)
	{
	printf("Your entered key is not found in the array\n");
	}
	else
	{
	printf("your entered key is found at %d\n",i);
	}
}

