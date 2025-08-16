#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter your word: ";
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        st.push(c);
    }
    string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    cout << ans;

    return 0;
}