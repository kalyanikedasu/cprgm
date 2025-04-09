 #include<stdio.h>
void main()
{
	int i,n,sum=0,a[100];
	printf("Enter number of elements to be stored:");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		sum+=a[i];
	printf("The sum of all the elements in the array is:%d\n",sum);
}
