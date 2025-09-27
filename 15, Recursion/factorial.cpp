#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;
    int result = n * fact(n - 1);
    return result;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << fact(n);
}