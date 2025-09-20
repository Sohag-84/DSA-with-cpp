#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the word length: ";
    cin >> n;
    queue<char> q;
    cout << "Enter your word: ";

    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        q.push(x);
    }

    queue<char> copyQueue;
    stack<char> st;
    while (!q.empty())
    {
        copyQueue.push(q.front());
        st.push(q.front());
        q.pop();
    }
    bool isPalindrom = true;
    while (!copyQueue.empty())
    {
        char a = copyQueue.front();
        char b = st.top();
        copyQueue.pop();
        st.pop();
        if (a != b)
        {
            isPalindrom = false;
            break;
        }
    }

    cout << endl;

    if (isPalindrom)
    {
        cout << "The number is palindrom";
    }
    else
    {
        cout << "The number is not palindrom";
    }

    return 0;
}