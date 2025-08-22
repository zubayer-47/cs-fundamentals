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
    }

    int n;

    cin >> n;

    while (n--)
    {
        int a, b;

        cin >> a >> b;

        vector<int> connections = adjacency_list[a];

        bool hasConnection = false;

        if (a == b)
            hasConnection = true;
        else
        {

            for (int i = 0; i < connections.size(); i++)
            {
                if (connections[i] == b)
                {
                    hasConnection = true;
                    break;
                }
            }
        }

        if (hasConnection)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}