#include <stdio.h>
void main()
{
    int  a=10;
    int *p=&a;
    p=&a;
    printf("a value:%d\n",a);
    printf("Value at variable address:%d\n",*p);
    printf("Address of a:%p\n",&a);
    printf("Address of variable:%p\n",p);
    printf("Address of pointer:%p\n",&p);
}
