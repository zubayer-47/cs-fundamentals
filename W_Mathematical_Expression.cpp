#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    int res;

    if (s == '+') {
        res = a + b;
    } else if (s == '-') {
        res = a - b;
    } else if (s == '*') {
        res = a * b;
    }

    if (res == c) {
        cout << "Yes" << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}