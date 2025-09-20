#include <bits/stdc++.h>
using namespace std;

void interleaveQueue(queue<int> &q)
{
    int n = q.size();
    queue<int> firstHalf;
    for (int i = 0; i < n / 2; i++)
    {
        firstHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty())
    {
        q.push(firstHalf.front());
        firstHalf.pop();

        q.push(q.front());
        q.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    int n;
    cout << "Enter the even number for queue size: ";
    cin >> n;
    cout << "Enter the elements of queue: ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    interleaveQueue(q);
    return 0;
}