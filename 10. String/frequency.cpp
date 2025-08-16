#include <bits/stdc++.h>
using namespace std;

vector<int> freq(7);

bool cmp(int a, int b)
{
    if (freq[a] > freq[b])
    {
        return true;
    }
    else if (freq[a] < freq[b])
    {
        return false;
    }
    else
    {
        if (a > b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{

    vector<int> v = {1, 4, 5, 1, 2, 3, 5, 6, 4, 1, 2, 5, 3, 2, 2};

    for (int x : v)
    {
        freq[x]++;
    }

    sort(v.begin(), v.end(), cmp);
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}