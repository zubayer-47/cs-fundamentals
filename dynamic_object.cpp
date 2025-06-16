#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
        int jersey_no;
        string country;

        Cricketer(int jersey_no, string country) {
            this->jersey_no = jersey_no;
            this->country = country;
        }
};

int
main()
{
    Cricketer* dhoni = new Cricketer(10, "India");
    Cricketer* kohli = new Cricketer(2, "India");

    *kohli = *dhoni;

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country << endl;

    return 0;
}