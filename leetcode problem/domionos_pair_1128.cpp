#include <bits/stdc++.h>
using namespace std;

int numEquivDominoPairs(vector<vector<int>> &dominoes)
{
    map<pair<int, int>, int> map;

    for (auto domino : dominoes)
    {
        pair<int, int> d = make_pair(domino[0], domino[1]);
        
        if (d.first > d.second)
        {
            swap(d.first, d.second);
        }
        //cout <<"{ " << d.first << "," << d.second <<" }"<< endl;
        map[d]++;
    }
    int ans = 0;
    for(auto data: map){
        ans += data.second*(data.second-1)/2;
    }
    // for(auto entry:map){
    //     cout << "(" << entry.first.first << ", "
    //          << entry.first.second << ") -> "
    //          << entry.second << endl;
    // }
    return ans;
}

int main()
{
    vector<vector<int>> dominoes = {
        // {1,2},{1,2},{1,1},{1,2},
        {1,2},{2,1},{3,4},{5,6}
    };
    int n = numEquivDominoPairs(dominoes);
    cout<<"Counter value: "<<n;
    return 0;
}