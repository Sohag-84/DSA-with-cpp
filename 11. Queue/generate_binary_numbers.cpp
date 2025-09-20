#include <bits/stdc++.h>
using namespace std;

/*
pattern: just add 0 and 1 with first queue values and get 2 binary values
1 -> 10 , 11
10 -> 100, 101
11 -> 110, 111
100 -> 1000, 1001
101 -> 1010, 1011
*/
void generateBinaryNumberFromZeroToN(int n)
{
    queue<string> q;
    q.push("0");
    q.push("1");
    cout << q.front() << endl;
    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            q.pop();
        }
        else
        {
            string curr = q.front();
            q.pop();
            cout << curr << endl;
            string first = curr + "0";
            string last = curr + "1";
            q.push(first);
            q.push(last);
        }
    }
}
void generateBinaryNumbersFromOneToN(int n)
{
    queue<string> q;
    q.push("1");
    for (int i = 0; i < n; i++)
    {

        string curr = q.front();
        q.pop();
        cout << curr << endl;
        string first = curr + "0";
        string last = curr + "1";
        q.push(first);
        q.push(last);
    }
}

int main()
{
    int n;
    cout << "Enter how many number do you want: ";
    cin >> n;
    generateBinaryNumbersFromOneToN(n);
    // generateBinaryNumberFromZeroToN(n);
}