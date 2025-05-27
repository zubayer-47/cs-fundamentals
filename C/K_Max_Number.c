#include <stdio.h>

int countMax(int *arr, int n, int ind) {
    if (ind == n-1) {
        return arr[ind];
    }

    int max = countMax(arr, n, ind + 1);
    if (max < arr[ind]) {
        return arr[ind];
    } else {
        return max;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largestNum = countMax(arr, n, 0);

    printf("%d", largestNum);

    return 0;
}