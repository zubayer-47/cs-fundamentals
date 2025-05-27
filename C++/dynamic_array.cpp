#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // if we need to increase array size.
    int *b = new int[7];

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    b[5] = 100;
    b[6] = 200;

    // delete the previous array to allocate memory
    delete[] a;

    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}