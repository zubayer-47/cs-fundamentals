#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double d = 34.45679;

    cout << fixed << setprecision(10) << d << endl;
    return 0;
}