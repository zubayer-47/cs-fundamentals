#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }

    int lastCol[m];

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            if (k == m-1) {
                lastCol[i] = arr[i][k];
            }

            if (i == n-1){
                printf("%d ", arr[i][k]);
            }
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", lastCol[i]);
    }

    return 0;
}