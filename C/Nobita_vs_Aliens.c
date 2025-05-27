#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0, j = n - 1, halfLen = n / 2, shootCount = 0;

    while (j >= halfLen)
    {
        if ((a[i] + a[j]) <= k) {
            shootCount += 1;
        } else {
            j--;
            continue;
        }
        
        i++;
        j--;
    }

    printf("%d", shootCount);

    return 0;
}