#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue
{
public:
    MyQueue()
    {
    }
    stack<int> st1;
    stack<int> st2;

    void push(int x)
    {
        // copy element st1 to st2
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }

    int pop()
    {
        int top = st1.top();
        st1.pop();
        return top;
    }

    int peek()
    {
        int top = st1.top();
        return top;
    }

    bool empty()
    {
        if (st1.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */