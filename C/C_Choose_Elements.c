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

    int sStart = n - k;
    long long int sum = 0;

    for (int i = 0; a[i]!='\0'; i++)
    {
        for (int j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] > a[j]){
                int temp = a[i];

                a[i] = a[j];
                a[j] = temp;
            }
        }

        if (i>=sStart) {
            // printf("%lld\n", a[i]);
            sum += a[i];
        }
    }

    // printf("%lld", sum);
    // if (sum > 0)
    // {
    //     printf("hey: %lld", sum);
    // }
    //     else {
    //         printf("%lld ", sum);
    //     }

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", a[i]);
    }

    return 0;
}