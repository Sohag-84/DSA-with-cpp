#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/implement-stack-using-queues/description/

class MyStack
{
public:
    MyStack() {}

    // queue<int> q1;
    // queue<int> q2;

    queue<int> q;

    void push(int x)
    {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        // // copy element from q1 to q2
        // while (!q1.empty()) {
        //     q2.push(q1.front());
        //     q1.pop();
        // }
        // // insert data in q1
        // q1.push(x);
        // // now copy all element from q2 to q1
        // while (!q2.empty()) {
        //     q1.push(q2.front());
        //     q2.pop();
        // }
    }

    int pop()
    {
        int top = q.front();
        q.pop();
        return top;
    }

    int top() { return q.front(); }

    bool empty()
    {
        if (q.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */