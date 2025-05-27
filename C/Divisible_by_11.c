#include <stdio.h>
#include <string.h>

int main() {
    char str[102];
    scanf("%s", str);

    int strLen = strlen(str);

    int evenCount = 0, oddCount = 0;

    for (int i = strLen - 1; i >= 0; i--)
    {
        int charInt = str[i] - '0';

        if (i % 2 == 0) {
            evenCount += charInt;
        } else {
            oddCount += charInt;
        }
    }

    int mainDigit = evenCount - oddCount;

    if (mainDigit % 11 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}