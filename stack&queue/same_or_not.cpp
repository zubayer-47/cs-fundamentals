#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    stack<int> st;

    while (n--)
    {
        int val;
        cin >> val;

        st.push(val);
    }

    queue<int> q;

    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (m--)
    {
        if (st.empty() || q.empty())
            break;
        else if (st.top() != q.front())
        {
            cout << "NO";
            return 0;
        }
        else
        {
            if (!st.empty())
                st.pop();

            if (!q.empty())
                q.pop();
        }
    }

    cout << "YES";

    return 0;
}