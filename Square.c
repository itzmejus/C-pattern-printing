#include <stdio.h>
void main(){
    int i,j,num;
    printf("enter number of rows\n");
    scanf("%d",&num);   
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        if(i==1||i==num||j==1||j==num||i==j||(i+j)==num+1)        {
           printf("* "); 
        }
        else 
        
        {
            printf("  ");
        }
        printf("\n");
    }
}