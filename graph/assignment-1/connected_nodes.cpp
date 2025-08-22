#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> adjacency_list(10000);

    int r, e;

    cin >> r >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }

    int n;

    cin >> n;

    while (n--)
    {
        int x;

        cin >> x;

        vector<int> connections = adjacency_list[x];

        if (!connections.size())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(connections.rbegin(), connections.rend());

            for (int i = 0; i < connections.size(); i++)
            {
                cout << connections[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}