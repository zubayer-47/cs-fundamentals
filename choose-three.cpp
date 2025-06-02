#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, sum;
        cin >> n >> sum;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool isMatched = false;

        for (int i = 0; i < n-2; i++) 
        {
            for (int j = i+1; j < n-1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum) {
                        isMatched = true;

                        break;
                    }
                }

                if (isMatched) {
                    break;
                }
                
            }
            
            if (isMatched) {
                break;
            }
        }

        if (isMatched) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        }

    return 0;
}