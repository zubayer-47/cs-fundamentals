#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool comp(Student s1, Student s2)
{
    // eng marks are same
    if (s1.eng_marks == s2.eng_marks) {
        // math marks are same
        if (s1.math_marks == s2.math_marks) {
            // then, sort by id in ascending order
            if (s1.id > s2.id) {
                return false;
            }

        // if it's not same, sort decending order by math_marks
        } else if (s1.math_marks < s2.math_marks) {
            return false;
        }

    // if eng marks are not same then sort decending order by eng_marks
    } else if (s1.eng_marks < s2.eng_marks) {
        return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        Student newS;

        cin >> newS.nm >> newS.cls >> newS.s >> newS.id >> newS.math_marks >> newS.eng_marks;

        students[i] = newS;
    }

    sort(students, students + n, comp);

    int i = 0;
    while (i != n)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
        
        i++;
    }

    return 0;
}