#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream sStream(s);
    string w;

    while (sStream >> w)
    {
        reverse(w.begin(), w.end());

        cout << w << " ";
    }

    return 0;
}