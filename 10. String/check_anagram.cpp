#include <bits/stdc++.h>
using namespace std;

int main()
{

    string first = "listen";
    string second = "silent";

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    cout << (first == second ? "Anagram" : "Not Anagram") << endl;

    return 0;
}