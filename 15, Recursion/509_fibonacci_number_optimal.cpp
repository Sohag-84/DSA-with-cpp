#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int result = solve(n - 1, dp) + solve(n - 2, dp);
    dp[n] = result;
    return dp[n];
}

int fib(int n)
{
    // size = n+1 and initailly store -1
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}

// time-> O(n) space -> O(1)
int fibOptimalSolution(int n)
{
    int curF = n, stepOnePrevF, stepTwoPrevF;
    stepOnePrevF = 0;
    stepTwoPrevF = 1;

    for (int i = 2; i < n; i++)
    {
        curF = stepOnePrevF + stepTwoPrevF;
        stepTwoPrevF = stepOnePrevF;
        stepOnePrevF = curF;
    }
    return curF;
}

int main()
{
    int n = 5;
    cout << fibOptimalSolution(n);
    // cout << fib(n);
}