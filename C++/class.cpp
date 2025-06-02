#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[100];
        int age = 0;
};

int
main()
{
    Student zubayer;

    // get string input with space
    cin.getline(zubayer.name, 100);

    // cin.ignore();
    cin >> zubayer.age;

    cout << zubayer.name << " " << zubayer.age << endl;

    return 0;
}