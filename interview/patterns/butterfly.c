#include<stdio.h>
void main()
{
	int i,j;

	 //for upper part
	 for(i=5;i>=1;i--)
	 {
		 for(j=5;j>=i;j--)
		 {
			 printf("%d ",j);
		 }
		 for(j=i-1;j>=1;j--)
		 {
			 printf("  ");
		 }
		 for(j=i-1;j>=1;j--)
                 {
		  if(j==1)	
			 continue;	//used to skip the present loop and execute next loop 
                  printf("  ");
                 }  
		 for(j=i;j<=5;j++)
		 {
		  if(j==1)
			  continue;
	          printf("%d ",j);
		 }
		 printf("\n");
	 }

	 //for lower part
         for(i=2;i<=5;i++)
         {
                 for(j=5;j>=i;j--)
                 {
                         printf("%d ",j);
                 }
                 for(j=i-1;j>=1;j--)
                 {
                         printf("  ");
                 }
                 for(j=i-1;j>=1;j--)
                 {
                  if(j==1)
                         continue;      //used to skip the present loop and execute next loop
                  printf("  ");
                 }
                 for(j=i;j<=5;j++)
                 {
                  if(j==1)
                          continue;
                  printf("%d ",j);
                 }
                 printf("\n");
         }

}
