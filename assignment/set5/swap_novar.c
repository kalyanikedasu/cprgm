#include<stdio.h>
void main()
{
	int a,b;
	printf("values before swapping\n");
        scanf("%d%d",&a,&b);
       // a=a+b;//  
       // b=a-b;//
       // a=a-b;//
       a=a^b;
       b=a^b;
       a=a^b;
        printf("Values after swapping are: a=%d\tb=%d",a,b);
}	
