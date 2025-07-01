#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a)
{
    // step-1
    vector<int> temp;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 0)
        {
            temp.push_back(a[i]);
        }
    }
    // step-2
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        a[i] = temp[i];
    }
    // step-3
    for (int i = nz; i < n; i++)
    {
        a[i] = 0;
    }
    return a;
}

int main()
{
    vector<int> a = {12, 5, 0, 7, 2, 0, 5, 6, 7, 0};
    vector<int> arr = moveZeros(a.size(), a);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}