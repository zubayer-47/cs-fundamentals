#include <bits/stdc++.h>
using namespace std;

class Stack {
    public:
        list<int> l;

    void push(int val) {
        l.push_back(val);
    }

    void pop() {
        if (!l.empty())
            l.pop_back();
    }

    int top() {
        return l.back();
    }

    bool empty() {
        return l.empty();
    }
};

class Queue {
    public:
        list<int> l;

    void push(int val) {
        l.push_back(val);
    }

    void pop() {
        l.pop_front();
    }

    int front() {
        return l.front();
    }

    bool empty() {
        return l.empty();
    }
};

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

    Stack st;

    while (n--)
    {
        int val;
        cin >> val;

        st.push(val);
    }

    Queue q;

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