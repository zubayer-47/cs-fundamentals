#include <stdio.h>

// int missingNumber(long long int m, int ind, int multOfThree)
// {

//     int f = multOfThree * ind;

//     if (f == m || ind == m)
//     {
//         if (f == m)
//         {
//             return ind;
//         }

//         return -1;
//     }

//     int hasFounded = missingNumber(m, ind + 1, multOfThree);

//     if (hasFounded > -1)
//     {
//         return hasFounded;
//     }

//     return -1;
// }

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        if (m==0) {
            printf("0\n");
            continue;
        }

        int multOfThree = a * b * c;

        long long int x = m / multOfThree;
        
        if ((x* multOfThree) != m)
        {
            printf("-1\n");
        } else {
            printf("%lld\n", x);
        }
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

    
//     for (int i = 0; i < t; i++)
//     {
//         long long int m;
//         int a, b, c;
//         scanf("%lld %d %d %d", &m, &a, &b, &c);

//         float multOfThree = a * b * c;
//         float test = m / multOfThree;
//         int combine = test * 10;

//         int lastDigit = combine % 10;

//         int n = combine / 10;

//         if (lastDigit != 0) {
//             printf("-1\n");
//         } else {
//             printf("%d\n", n);
//         }
//     }

//     return 0;
// }