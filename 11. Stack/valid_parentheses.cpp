#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter parentheses: ";
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else//[({})]([])
        {
            if (c == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (c == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (c == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }
    if (st.empty())
    {
        cout << "Valid Parentheses";
    }
    else
    {
        cout << "Invalid Parentheses";
    }
    return 0;
}