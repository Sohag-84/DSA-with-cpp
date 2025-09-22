#include <bits/stdc++.h>
using namespace std;

int main()
{
    //priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int> pq;
    pq.push(12);
    pq.push(12);
    pq.push(10);
    pq.push(14);
    pq.push(13);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}