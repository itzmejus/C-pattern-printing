#include <stdio.h>
void main()
{
    int i,j,m=1,k,n=5;
    for(i=1;i<=7;i++)
    {   
        //loop to print space
        for(j=1;j<n;j++)
        {
            printf("  ");
        }
        //loop to print *
        for(k=1;k<m*2;k++)
        {
            printf(" X");
        }
        printf("\n");
        if(i<4)
        {
            n--;
            m++;
        }
        else
        {
            n++;
            m--;
        }
    }
}


/* 

       X
     X X X
   X X X X X
 X X X X X X X
   X X X X X
     X X X
       X
       
 */