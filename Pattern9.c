#include <stdio.h>

void main()
{
    int i, j, k;
    for (i = 0; i <= 3; i++)
    {
        for (j = 1; j <= i * 3; j++)
        {
            printf("* ");
        }

        printf("\n");
        if (i <= 3)
            for (k = 1; k <= i; k++)
            {
                printf("*\n");
            }
    }
}