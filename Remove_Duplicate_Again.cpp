#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> lList;

    int val;
    while (cin >> val && val != -1)
    {
        lList.push_back(val);
    }

    lList.sort();
    // lList.unique();

    auto currIt = lList.begin();

    while (currIt != lList.end())
    {
        auto nextIt = next(currIt);
        if (nextIt != lList.end() && *currIt == *nextIt) {
            lList.erase(nextIt);
        } else {
            ++currIt;
        }
    }
    
    for (int l : lList)
    {
        cout << l << " ";
    }

    return 0;
}