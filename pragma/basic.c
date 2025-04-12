#include<stdio.h>
#pragma pack(1)
struct xyz{
        int a;
        float b;
        long int x;
        char c;
        long double y;
}s1;                                                    
void main()
{
        printf("%d",sizeof(s1));
}                                                  
