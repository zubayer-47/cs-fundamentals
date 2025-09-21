#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;
};

int n, e;
vector<Edge> edge_list;
long long dist[1005];

long long INF = LONG_LONG_MAX;

int main()
{
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        edge_list.push_back({u, v, w});
    }

    int s;
    cin >> s;

    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
    dist[s] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (auto edge : edge_list)
        {
            if (dist[edge.u] != INF && dist[edge.u] + edge.w < dist[edge.v])
            {
                dist[edge.v] = dist[edge.u] + edge.w;
            }
        }
    }

    bool negative_cycle = false;
    for (auto edge : edge_list)
    {
        if (dist[edge.u] != INF && dist[edge.u] + edge.w < dist[edge.v])
        {
            negative_cycle = true;
            break;
        }
    }

    int t;
    cin >> t;

    bool isNegCycle = false;

    while (t--)
    {
        int d;
        cin >> d;

        if (negative_cycle)
        {
            isNegCycle = true;
        }
        else if (dist[d] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[d] << endl;
        }
    }

    if (isNegCycle)
        cout << "Negative Cycle Detected" << endl;

    return 0;
}