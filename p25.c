#include <stdio.h>
void main()
{
    int i,j,m,k,n=0;
    for(i=1;i<=3;i++)
    {
        n=n+1;
        for(j=1;j<=2;j++)
        {
            for(k=1;k<=n;k++)
            {
                printf("x ");
            }
            printf("\n");
        }
        for(m=1;m<=i*3;m++)
        {
            printf("x ");
        }
        printf("\n");
    }
    
    
}