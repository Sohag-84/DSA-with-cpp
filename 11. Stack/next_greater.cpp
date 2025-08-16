#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the vector element: ";
    for (auto &x : v)
    {
        cin >> x;
    }

    vector<int> ans(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() < v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(v[i]);
    }

    // print the result
    cout << "Result: " << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}