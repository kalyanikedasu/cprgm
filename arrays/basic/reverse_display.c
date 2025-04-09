#include <stdio.h>
void main()
{
   int i, n, a[10];
   printf("Enter number of elements to store in the array :");
   scanf("%d", &n);
   printf("Enter %d elements into array :\n", n);
   for (i = 0; i < n; i++)
   {
      printf("element - %d : ", i);
      scanf("%d", &a[i]);
   }
   printf("The values stored in the array are : \n");
   for (i = 0; i < n; i++)
   {
       printf("%d", a[i]);  
   }
   printf("\nThe values stored in the array in reverse are :\n");
   for (i = n - 1; i >= 0; i--)
   {
       printf("%d", a[i]);
   }
}

