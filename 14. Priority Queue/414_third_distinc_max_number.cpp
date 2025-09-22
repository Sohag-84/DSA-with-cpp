#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/third-maximum-number/description/

int thirdMax(vector<int> &nums)
{
    priority_queue<int> pq;
    for (int val : nums)
    {
        pq.push(val);
    }
    int firstMax = pq.top();

    while (pq.size() > 0 && pq.top() == firstMax)
    {
        pq.pop();
    }

    if (pq.size() > 0)
    {
        int secondMax = pq.top();
        while (pq.size() > 0 && pq.top() == secondMax)
        {
            pq.pop();
        }
    }
    if (pq.size() > 0)
    {
        return pq.top();
    }
    else
    {
        return firstMax;
    }
}

int main()
{
    vector<int> nums = {3, 3, 4, 3, 4, 3, 0, 3, 3};
    cout << thirdMax(nums);
    return 0;
}