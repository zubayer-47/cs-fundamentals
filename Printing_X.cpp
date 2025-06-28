#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int loopEndsOn = ceil(n / 2.0);

    for (int i = n; i >= loopEndsOn; i--)
    {
        int gap = n - i;

        for (int k = 1; k <= i; k++)
        {
            if (k <= gap)
            {
                cout << " ";
                continue;
            }

            if ((i - gap) == 1)
            {
                cout << "X";
                break;
            }

            if (k == i)
            {
                cout << "/";
            }
            else if ((gap + 1) == k)
            {
                cout << "\\";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    for (int i = loopEndsOn + 1; i <= n; i++)
    {
        int gap = n - i;

        for (int k = 1; k <= i; k++)
        {
            if (k <= gap)
            {
                cout << " ";
                continue;
            }

            if ((i - gap) == 1)
            {
                cout << "X";
                break;
            }

            if (k == i)
            {
                cout << "\\";
            }
            else if ((gap + 1) == k)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}