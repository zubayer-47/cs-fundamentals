#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lList;

    int q, ind = 0;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x;
        cin >> v;

        if (x == 0)
        {
            lList.push_front(v);
            ind++;
        }
        else if (x == 1)
        {
            lList.push_back(v);
            ind++;
        }
        else if (x == 2 && v < ind)
        {
            auto it = next(lList.begin(), v);
            lList.erase(it);
            
            ind--;
        }

        cout << "L -> ";
        for (int value : lList)
        {
            cout << value << " ";
        }

        cout << endl;
        cout << "R -> ";
        for (auto it = lList.rbegin(); it != lList.rend(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }

    return 0;
}