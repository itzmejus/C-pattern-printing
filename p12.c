#include <stdio.h>
void main(){
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        for(j=1;j<i;j++)
        {
            printf("5");
        }
    printf("\n");
    }


}


/* 
55555
45555
34555
23455
12345 */


//output