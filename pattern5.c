
#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Prints first part of the pattern
        for(j=2; j>=i*2; j-=2)
        {
            printf("*");
        }

    
        printf("\n");
    }

    return 0;
}