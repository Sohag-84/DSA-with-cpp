#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the stack size: ";
    int n;
    cin >> n;
    cout << "Enter stack values: " << endl;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cout << "Top value: " << st.top();
    return 0;
}