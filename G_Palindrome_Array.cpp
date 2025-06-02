#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = 0, last = n - 1;
    bool isNotPalindrome = false;

    while (first < last)
    {
        if (arr[first] != arr[last]) {
            isNotPalindrome = true;
            break;
        }

        first++;
        last--;
    }

    if (isNotPalindrome) {
        cout << "NO" << endl;
    } else {   
        cout << "YES" << endl;
    }

    return 0;
}