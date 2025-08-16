#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int marks;
    Student(int roll, int marks)
    {
        this->roll = roll;
        this->marks = marks;
    }
};

bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
    {
        return true;
    }
    else if (a.marks < b.marks)
    {
        return false;
    }
    else
    {
        if (a.roll < b.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    vector<Student> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int roll, marks;
        cin >> roll >> marks;
        v.push_back(Student(roll, marks));
    }

    sort(v.begin(), v.end(),cmp);

    cout << "Output: " << endl;

    for (auto x : v)
    {
        cout << x.roll << " " << x.marks << endl;
    }
    // 6
    // 2 99
    // 1 99
    // 3 100
    // 4 80
    // 5 80
    // 6 100
    return 0;
}