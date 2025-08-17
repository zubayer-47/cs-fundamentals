#include <bits/stdc++.h>
using namespace std;

// 5 6
// 0 1
// 0 3
// 0 2
// 0 4
// 1 4
// 2 4

// 1 1 1 1 1
// 0 1 0 0 1
// 0 0 1 0 1
// 0 0 0 1 0
// 0 0 0 0 1

int main()
{
    int n, c;
    cin >> n >> c;

    int adjacency_matrix[n][n];

    // set every node to 0
    memset(adjacency_matrix, 0, sizeof(adjacency_matrix));

    // set only diagonal nodes to 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adjacency_matrix[i][j] = 1;
            }
        }
    }

    // get input
    for (int i = 0; i < c; i++)
    {
        int r, l;
        cin >> r >> l;

        adjacency_matrix[r][l] = 1;
    }

    // print matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjacency_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}