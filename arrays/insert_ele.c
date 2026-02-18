#include<stdio.h>

int main()
{
int a[7]={1,2,3,4,5,9};

int n=sizeof(a)/sizeof(int);

int key=21;

int pos=5;

for(int i=n;i>5;i--)
{
a[i]=a[i-1];
}
a[pos]=key;

for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
