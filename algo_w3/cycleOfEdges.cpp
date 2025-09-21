#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int n, e;

int find(int v)
{
    if (v == parent[v])
    {
        return v;
    }

    return parent[v] = find(parent[v]);
}

void union_sets(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA != leaderB)
    {
        parent[leaderB] = leaderA;
    }
}

int main()
{
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    int cycle_count = 0;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        int leaderA = find(u);
        int leaderB = find(v);

        if (leaderA == leaderB)
        {
            cycle_count++;
        }
        else
        {
            union_sets(u, v);
        }
    }

    cout << cycle_count << endl;

    return 0;
}