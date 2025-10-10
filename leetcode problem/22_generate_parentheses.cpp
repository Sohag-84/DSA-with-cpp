#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (auto c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

void solve(int n, string cur, int open, int close, vector<string> &ans)
{
    if (cur.size() == 2 * n)
    {
        ans.push_back(cur);
        return;
    }
    if (open < n)
    {
        solve(n, cur + '(', open + 1, close, ans);
    }
    if (close < open)
    {
        solve(n, cur + ')', open, close + 1, ans);
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    solve(n, "", 0, 0, ans);
    return ans;
}

int main()
{
    vector<string> res = generateParenthesis(3);
    for (auto &str : res)
    {
        cout << str << "\n";
    }

    return 0;
}