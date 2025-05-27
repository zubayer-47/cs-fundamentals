#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        int b[n];
        int comp[n];

        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }

        for (int f = 0; f < n; f++)
        {
            for (int s = f+1; s < n; s++)
            {
                if (b[f] > b[s]) {
                    int tmp = b[f];

                    b[f] = b[s];
                    b[s] = tmp;
                }
            }

            int res = abs(a[f] - b[f]);

            comp[f] = res;

            printf("%d ", comp[f]);
        }

        printf("\n");
    }

    return 0;
}