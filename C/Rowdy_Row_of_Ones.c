#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);


    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int maxNRow;

    for (int i = 0; i < n; i++)
    {
        int isBreak = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            if (a[i][j] == 0)
            {
                isBreak = 1;

                break;
            }

            maxNRow = i;
        }

    }

    printf("%d", maxNRow);

    return 0;
}