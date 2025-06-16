#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    reverse(arr, arr + 5);

    for (int d : arr){
        cout << d << " ";
    }

    cout << endl;

    string str = "bangladesh";

    reverse(str.begin(), str.end());

    cout << str << endl;

    return 0;
}