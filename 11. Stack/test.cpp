#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the name: ";
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        st.push(c);
    }
    string ans;
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}