#include <stdio.h>
void main()
{
    int i,j,m,k=0;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<k*2;j++)
        {
            if(j%2!=0)
            {
                printf("%d",k);
            }
            else
            {
                printf("X ");           
             }
        }
             printf("\n");
             if(i<4)
             {
                 k++;
             }
             else if(i>4)
             {
                 k--;
             }
        
    }
}


/* 
1
2X 2
3X 3X 3
3X 3X 3
2X 2
1
 */