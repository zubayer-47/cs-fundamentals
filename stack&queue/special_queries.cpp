#include <bits/stdc++.h>
using namespace std;

int main()
{
    int queries;
    cin >> queries;

    queue<string> q;

    while (queries--)
    {
        char indicator;
        cin >> indicator;

        string name;

        if (indicator == '0')
        {
            cin >> name;
            q.push(name);
        }

        if (indicator == '1') {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}