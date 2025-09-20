#include <bits/stdc++.h>
using namespace std;

/*
pattern: just add 1 and 2 with first queue values and get 2 other values
1 -> 11, 12
2 -> 21, 22
11
12
21
22
111 112 121 122
*/
void generateNthSequenceNumber(int n)
{
    queue<string> q;
    q.push("1");
    q.push("2");
    for (int i = 0; i < n; i++)
    {

        string curr = q.front();
        q.pop();
        cout << curr << endl;
        string first = curr + "1";
        string last = curr + "2";
        q.push(first);
        q.push(last);
    }
}

int main()
{
    int n;
    cout << "Enter how many number do you want: ";
    cin >> n;
    generateNthSequenceNumber(n);
}