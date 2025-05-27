#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);


    if (n!=m){
        printf("NO");
        return 0;
    }

    int isPrimaryDiagonal = 0, isSecondaryDiagonal = 0, isNotDiagonal = 0;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int shouldBreak = 0;
        for (int k = 0; k < m; k++)
        {
            if (i==k && arr[i][k] != 1) {
                isPrimaryDiagonal = 0;
                shouldBreak = 1;
                break;
            }

            isPrimaryDiagonal = 1;
        }

        for (int j = 0; j < m; j++)
        {
            int c = abs(i - m) -1;

            if (arr[i][c] != 1) {
                isSecondaryDiagonal = 0;
                shouldBreak = 1;
                break;
            }

            isSecondaryDiagonal = 1;
        }

        for (int k = 0; k < m; k++)
        {
            int primDiagonalCell = i == k;
            int secDiagonalCell = k == abs(i - m) -1;

            if (primDiagonalCell || secDiagonalCell) {
                continue;
            } else if (arr[i][k] != 0)
            {
                isNotDiagonal = 1;
                shouldBreak = 1;
                break;
            }
        }

        if (shouldBreak) {
            break;
        }
    }

    if (isPrimaryDiagonal && isSecondaryDiagonal && !isNotDiagonal) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}