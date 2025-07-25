#include <bits/stdc++.h>
using namespace std;

int compare_and_delete(queue<char> q)
{
    stack<char> st;

    while (!q.empty())
    {
        char currC = q.front();

        if (!st.empty())
        {
            char prevC = st.top();

            if (prevC == '0' && currC == '1')
            {
                q.pop();

                st.pop();
            }
            else
            {
                st.push(q.front());
                q.pop();
            }
        }
        else
        {
            st.push(currC);
            q.pop();
        }
    }

    return st.size();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        queue<char> q;

        for (int i = 0; i < str.size(); i++)
        {
            q.push(str[i]);
        }

        int size = compare_and_delete(q);

        if (size) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}