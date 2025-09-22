#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            return true;
        }
    }
    return false;
}

bool containsDuplicate2(vector<int> &nums)
{
    unordered_map<int, int> count;
    for (auto val : nums)
    {
        count[val] = count[val] + 1;
        if (count[val] > 1)
        {
            return true;
        }
    }

    return false;
}
bool containsDuplicate3(vector<int> &nums)
{
    unordered_map<int, bool> visited;
    for (auto val : nums)
    {
        if (visited[val])
        {
            return true;
        }
        else
        {
            visited[val] = true;
        }
    }

    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 1};
    // complexity -> O(NlogN) ==> for sort->O(logn) and for loop->O(n)
    cout << containsDuplicate(nums) << endl;
    // complexity -> O(n) ==> for unordered_map -> constant and for loop->O(n)
    cout << containsDuplicate2(nums) << endl;
    // more efficient for memory because bool value takes only 1 bytes space
    cout << containsDuplicate3(nums);
    return 0;
}