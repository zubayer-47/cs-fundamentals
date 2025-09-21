#include <bits/stdc++.h>
using namespace std;

int n, e;
long long dist[1005][1005];

const long long INF = LONG_LONG_MAX;

int main()
{
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else
            {
                dist[i][j] = INF;
            }
        }
    }

    for (int i = 0; i < e; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;

        dist[u][v] = min(dist[u][v], w);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;

        if (dist[x][y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[x][y] << endl;
        }
    }

    return 0;
}