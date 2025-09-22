#include <bits/stdc++.h>
using namespace std;

/*
Set and Unordered set always remove the duplicate value.
It only store unique value.
The difference between set and unordered set:
  ->set store and gives us sorted value. The complexity is O(nlogn)
  ->unordered set store and gives us random value. The complexity is O(n)
*/
int main()
{
    unordered_set<int> st;
    st.insert(100);
    st.insert(32);
    st.insert(120);
    st.insert(5);
    st.insert(90);
    st.insert(30);
    st.insert(80);

    for (auto val : st)
    {
        cout << val << " ";
    }
    cout << endl;
    if (st.count(100) == 1)
    {
        cout << "100 is present";
    }

    return 0;
}