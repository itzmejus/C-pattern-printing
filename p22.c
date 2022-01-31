#include <stdio.h>
void main(){
    int i,j,n=1;
   for(i=1;i<=4;i++)
   {
       for(j=i;j>=1;j--)
       {
           printf("%d",j%2);
       }
       printf("\n");
   }
    
}


/* 
1
01
101
0101
 */
