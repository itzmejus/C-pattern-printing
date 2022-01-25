#include <stdio.h>
void main(){
    int i,j,k;
    int m=0;
    for(i=1;i<=3;i++)
    { m=m+i;
        for(k=1;k<=m+1;k++)
        {
            printf("*");
        }
        printf("\n");
        for(k=1;k<=m+1;k++)
        {
            printf("*");
        }
        printf("\n");
        for(j=1;j<=i*3;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}