#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int smallest ;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);

        arr[i] = tmp;

        if (i==0) {
            smallest = arr[i];
        } else if (smallest > tmp) {
            smallest = tmp;
        } else {
            continue;
        }
    }

    int luckyCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (smallest == arr[i]) {
            luckyCount++;
        }
    }

    if (luckyCount%2==0) {

        printf("Unlucky");
    }else {

        printf("Lucky");
    }
    


    return 0;
}