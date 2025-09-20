#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/dsa/reversing-first-k-elements-queue/

/*
case:
1st step-> we have to store queue's values on the kth size stack
2nd step-> then we have to store stack's values on the queue with
the remaining queue's values
3rd step-> then push the front n-k element in the existing queue's last.]
that means, first n-k element goes to last element one by one.and delete the first
n-k element.
*/

void reverseK(queue<int> &q, int k)
{
    stack<int> st;
    // 1st step
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    // 2nd step
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    // 3rd step
    int size = q.size() - k;
    for (int i = 0; i < size; i++)
    {
        q.push(q.front());
        q.pop();
    }

    // print current queue
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
    cout << "Enter the size of queue: ";
    cin >> n;
    cout << "Enter the element of queue: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    int k;
    cout << "Enter the reverse length size: ";
    cin >> k;
    reverseK(q, k);
    return 0;
}