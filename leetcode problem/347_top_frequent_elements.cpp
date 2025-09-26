#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> freqMap;
    for (int val : nums)
    {
        freqMap[val] = freqMap[val] + 1;
    }
    // for(auto val: freqMap){
    //     cout<<val.first<< " "<<val.second <<endl;
    // }

    priority_queue<pair<int, int>> maxHeap;
    for (auto it : freqMap)
    {
        // store value with frequency wise sort
        maxHeap.push(make_pair(it.second, it.first));
    }
    // print the heap value
    //  while (maxHeap.size())
    //  {
    //      cout << "(" << maxHeap.top().first << " " << maxHeap.top().second << ")" << endl;
    //      maxHeap.pop();
    //  }
    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        // store value not frequency
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
    vector<int> result = topKFrequent(nums, 2);
    for (int val : result)
    {
        cout << val << " ";
    }

    return 0;
}