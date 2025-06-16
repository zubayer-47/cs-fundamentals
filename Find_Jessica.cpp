#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string fixedWord = "Jessica";

    stringstream ss(s);
    string word;

    bool isFound = false;

    while (ss >> word)
    {
        if (word == fixedWord) {
            isFound = true;
            break;
        }
    }
    
    if (isFound)
 {
     cout << "YES" << endl;
    } else {
     cout << "NO" << endl;

 }
    return 0;
}