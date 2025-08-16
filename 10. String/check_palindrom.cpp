#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "madams";
    string rev = s;

    reverse(s.begin(), s.end());

    if (s == rev)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}