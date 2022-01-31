#include <stdio.h>
void main(){
    int i,j, k=7;
   for(i=1;i<=4;i++)
   {

       for(j=1;j<=k;j++)
       {
           printf("%d",j);
       }
       printf("\n");
       k-=2;
       
   }
    
}

/* 
1234567
12345
123
1
 */