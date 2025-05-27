#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int luckyNumbers[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int isLucky = 0;

    for (int i = 0; i < 14;i++) {
        if (n % luckyNumbers[i] == 0)
        {
            isLucky = 1;
            break;
        }
    }

    if (isLucky) {
            printf("YES");
        } else {
            printf("NO");
        }

        return 0;
}