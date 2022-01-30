#include <stdio.h>
void main(){
    int i,j,m,k;
    for(i=1;i<=5;i++)
   {
       m=1;
       k=2;
       for(j=1;j<=i;j++)
       if(i%2!=0)
       {
           printf("%d",m);
            m=m+2;
       }
       else 
       {
           printf("%d",k);
           k=k+2;
       }
       
    printf("\n");
   }

}


//output
/*
1
24
135
2468
13579 */