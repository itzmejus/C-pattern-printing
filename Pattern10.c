#include <stdio.h>
void main(){
    int i,j,k;
    int m=0;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i*3;j++)
        {
            printf("*");
        }
        printf("\n");
    if(i<3){

    m=m+3;
    for(k=1;k<=m;k++)
    {
     printf("*\n");
    }
    }
    }
}