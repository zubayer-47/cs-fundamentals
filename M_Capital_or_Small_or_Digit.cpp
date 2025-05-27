#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x;

    cin >> x;

    if (x >= 48 && x <= 57) { // digit
        cout << "IS DIGIT" << endl;

        return 0;
    }

    if (x >= 65 && x <= 90 || x >= 97 && x <= 122)
    { // if alphabet
        cout << "ALPHA" << endl;
    }
    
    x >= 65 && x <= 90 ? cout << "IS CAPITAL" << endl : cout << "IS SMALL" << endl;

    return 0;
}