#include<stdio.h>

int main()
{
int a[]={2,3,1,5,7};

int n=sizeof(a)/sizeof(int);

int max=a[0];
int second=a[0];

for(int i=0;i<n;i++)
{
if(a[i]>max)
{
second=max;
max=a[i];
}
else if(a[i]>second && a[i]!=max)
{
second=a[i];
}
}
printf("2nd max is %d and first max is %d",second,max);
}
