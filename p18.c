#include <stdio.h>
void main()
{
    int i,j,num,k;
    char a=97;
    for(i=1;i<=5;i++)
    { 
        num=5;

        for(j=1;j<=5;j++)
        if(i==1||j==1||i==5||j==5)
        {
            printf("%d ",num);
        }
        
       else
        
        {
            printf("%c ",a++);
        }
         printf("\n");
    }
}



/* 

5 5 5 5 5 
5 A B C 5 
5 D E F 5
5 G H I 5
5 5 5 5 5
 */