#include <stdio.h>
void main()
{
    int i,j,m,k=1;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<k*2;j++)
        {
            if(j%2!=0)
            {
                printf("%d ",k);
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

OUTPUT
1 
2 X 2
3 X 3 X 3
4 X 4 X 4 X 4
4 X 4 X 4 X 4
3 X 3 X 3
2 X 2
1


 */