#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    long long sum = (long long)x + y;
    long long mult = (long long)x * y;
    long long subst = (long long)x - y;

    cout << x << " " << "+" << " " << y << " = " << sum << endl;
    cout << x << " " << "*" << " " << y << " = " << mult << endl;
    cout << x << " " << "-" << " " << y << " = " << subst << endl;

    return 0;
}