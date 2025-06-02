#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student bestStudent;
        bestStudent.total_marks = -1;

        for(int i=0; i<3;i++) {
            Student currentStudent;

            cin >> currentStudent.id >> currentStudent.name >> currentStudent.section >> currentStudent.total_marks;

            if (currentStudent.total_marks > bestStudent.total_marks) {
                bestStudent = currentStudent;
            }
        }

        cout << bestStudent.id << " " << bestStudent.name << " " << bestStudent.section << " " << bestStudent.total_marks << endl;
    }

    return 0;
}