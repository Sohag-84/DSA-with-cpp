#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/relative-ranks/description/

vector<string> findRelativeRanks(vector<int> &score)
{
    int n = score.size();
    vector<string> ans(n);
    // here first int for score value and second int for array th index
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(make_pair(score[i], i));
    }
    ans[pq.top().second] = "Gold Medal";
    pq.pop();
    if (pq.size() > 0)
    {
        ans[pq.top().second] = "Silver Medal";
        pq.pop();
    }
    if (pq.size() > 0)
    {
        ans[pq.top().second] = "Bronze Medal";
        pq.pop();
    }

    int rank = 4;
    while (!pq.empty())
    {
        ans[pq.top().second] = to_string(rank);
        pq.pop();
        rank++;
    }

    return ans;
}

int main()
{
    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> vc = findRelativeRanks(score);

    for (auto val : vc)
    {
        cout << val << " ";
    }

    return 0;
}