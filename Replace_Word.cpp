#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string s, x;

        cin >> s >> x;

        string res;
        int n = 0;
        
        while (n < s.length())
        {
            string subStr = s.substr(n, x.length());

            if (subStr == x) {
                res += "#";
                n += x.length();
            }
            else
            {
                res += s[n];
                n++;
            }
        }

        cout << res << endl;
    }

    return 0;
}