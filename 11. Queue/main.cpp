#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}