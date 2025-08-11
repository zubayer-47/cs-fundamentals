#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        if (a.first == b.first && a.second < b.second)
        {
            return true;
        } else if (a.first > b.first) {
            return true;
        } else {
            return false;
        }
    }
};

int main()
{
    int n;

    cin >> n;

    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;

    while (n--)
    {
        pair<string, int> p;
        cin >> p.first >> p.second;

        pq.push(p);
    }

    while (!pq.empty())
    {
        pair<string, int> p = pq.top();
        pq.pop();

        cout << p.first << " " << p.second << endl;
    }

    return 0;
}