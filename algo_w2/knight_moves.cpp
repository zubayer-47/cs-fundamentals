#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
int level[1005][1005];

vector<pair<int, int>> d = {
    {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

int bfs(int si, int sj, int qi, int qj)
{
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    queue<pair<int, int>> q;

    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        for (int k = 0; k < 8; k++)
        {
            int ci = par_i + d[k].first;
            int cj = par_j + d[k].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }

    return level[qi][qj];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        cin >> n >> m;

        int ki, kj;
        cin >> ki >> kj;

        int qi, qj;
        cin >> qi >> qj;

        cout << bfs(ki, kj, qi, qj) << endl;
    }
    return 0;
}