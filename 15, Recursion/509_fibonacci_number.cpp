#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/fibonacci-number/description/

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    int result = fib(n - 1) + fib(n - 2);
    return result;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << fib(n);
}