#include <bits/stdc++.h>
using namespace std;

int weight[1005];
int val[1005];

int dp[1005][1005];

void adventure()
{
    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (weight[i - 1] <= j)
            {
                int choice1 = val[i - 1] + dp[i - 1][j - weight[i - 1]];

                int choice2 = dp[i - 1][j];

                dp[i][j] = max(choice1, choice2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][w] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        adventure();
    }
    return 0;
}