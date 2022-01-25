#include<stdio.h>
int main(void)
{
          int i,j,k,l,n=0;
          for(i=1;i<=3;i++)
          {
                    for(j=1;j<=2;j++)
                    {
                              for(k=1;k<=i;k++)
                              {
                              printf("x");
                              }
                               printf("\n");
                    }
                     
          n=n+3;
          for(l=1;l<=n;l++)
          {
                    printf("x ");
          }
          printf("\n");
          }
         
          return 0; 
}