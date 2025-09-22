#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> pq;
    for (auto val : stones)
    {
        pq.push(val);
    }

    while (pq.size() > 1)
    {
        int s1 = pq.top();
        pq.pop();
        int s2 = pq.top();
        pq.pop();
        int result = s1 - s2;
        pq.push(result);
    }
    if (pq.size() == 0)
        return 0;
    return pq.top();
}

int main()
{
    vector<int> stones = {2, 7, 4, 1, 8, 1};
    cout << lastStoneWeight(stones);
    return 0;
}