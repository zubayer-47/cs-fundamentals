#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    
    int z = n / 2;
    
    int m = 6 + z;

    for (int i = 0; i < m; i++)
    {
        for (int k = 1; k <= m + i; k++)
        {
            int gap = abs(m - i);

            if (k < gap)
            {
                printf(" ");
            } else {   
                printf("*");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5 + n; k++)
        {
            if (k < 5)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}