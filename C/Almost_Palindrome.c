#include <stdio.h>
#include <string.h>
#include <math.h>

int isPalindrome(char str[1000]) {
    int strLen = strlen(str);
    double half = strlen(str) / 2.0;
    long long int ceiledHalf = ceil(half);

    for (int i = 0; i < ceiledHalf; i++)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        char str[1000];
        scanf("%s", str);

        isPalindrome(str);
        printf("\n");
    }

    return 0;
}