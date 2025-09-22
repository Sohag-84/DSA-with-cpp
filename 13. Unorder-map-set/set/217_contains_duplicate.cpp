#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    set<int> st;
    for (auto val : nums)
    {
        st.insert(val);
    }
    if (st.size() != nums.size())
        return true;
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 1};
    cout << containsDuplicate(nums);

    return 0;
}