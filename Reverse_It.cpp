#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        string nm;
        int cls;
        char s;
        int id;
};

int
main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        Student newS;

        cin >> newS.nm >> newS.cls >> newS.s >> newS.id;

        students[i] = newS;
    }

    int begin = 0, end = n - 1;

    while (begin < int(n / 2))
    {
        Student tmpS = students[begin];

        students[begin].s = students[end].s;
        students[end].s = tmpS.s;

        begin++;
        end--;
    }

    int i = 0;

    while (i != n)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;

        i++;
    }

    return 0;
}