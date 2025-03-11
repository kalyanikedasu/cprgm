#include<stdio.h>
void main()
{
	float bs,hra,da,oa,gross;
	printf("Enter bs:");
	scanf("%f",&bs);
       	printf("Enter hra:");
        scanf("%f",&hra);
	printf("Enter da:");
       	scanf("%f",&da);
	printf("Enter oa:");
       	scanf("%f",&oa);
	gross=bs+hra+da+oa;
	printf("Gross salary gross is:%.3f",gross);
}
