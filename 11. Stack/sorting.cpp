#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of stack: ";
    cin >> n;
    stack<int> input;
    cout << "Enter the stack value: " << endl;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        input.push(value);
    }
    stack<int> sorted;
    while (!input.empty())
    {
        int top = input.top();
        input.pop();
        while (!sorted.empty() && sorted.top() > top)
        {
            input.push(sorted.top());
            sorted.pop();
        }
        sorted.push(top);
    }
    while (!sorted.empty())
    {
        cout << sorted.top() << " ";
        sorted.pop();
    }

    return 0;
}