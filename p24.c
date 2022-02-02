#include <stdio.h>
void main()
{
    int i,j,k,m=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            printf("X");
        }
        printf("\n");
        m=m+1;
        if(i<4)
       { for(k=1;k<=m;k++)
        {
            printf("x \n");
        }
        }

    }
}


/* 

XX
x
XXX
x
x
XXXX
x
x
x
XXXXX
 */