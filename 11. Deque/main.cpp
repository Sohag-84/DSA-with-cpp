#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(12);
    dq.push_back(11);
    dq.push_back(21);
    dq.push_back(21);
    dq.push_back(14);
    dq.push_back(14);
    dq.push_back(14);
    dq.push_back(4);

    // while (!dq.empty())
    // {
    //     cout << dq.front() << " ";
    //     dq.pop_front();
    // }

    // cout << endl;
    // dq.push_back(12);
    // dq.push_back(11);
    // dq.push_back(14);
    // while (!dq.empty())
    // {
    //     cout << dq.back() << " ";
    //     dq.pop_back();
    // }


    sort(dq.begin(), dq.end());

    // dq.insert(dq.begin(), 200);
    // dq.erase(dq.begin(), dq.begin()+3);
    for(auto x: dq) cout<<x<<" ";
    cout<<endl;
    //remove duplicate values
    dq.erase(unique(dq.begin(),dq.end()), dq.end());

    for(auto x: dq) cout<<x<<" ";
    return 0;
}