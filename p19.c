#include <stdio.h>
void main(){
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
       }
    printf("\n");
    for(j=i-1;j>=1;j--)
    {
        printf("%d",j);
    }
    i--;
    printf("\n");
    }

}


/* 
12345
4321
123
21
1

 */