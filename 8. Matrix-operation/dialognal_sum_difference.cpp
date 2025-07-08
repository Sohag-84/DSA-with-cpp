#include <bits/stdc++.h>
using namespace std;

// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

int main()
{
    // 4
    // 1, 5, 12, 1
    // 2, -4, 6, 7
    // 3, 8, 5, 9
    // 3, 5, 23, 6
    int n;
    // cout << "Enter the row coloum size: ";
    cin >> n;
    int arr[n][n];
    int sum1 = 0;
    int sum2 = 0;
    // input array
    // cout << "Enter the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // logic
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
            if (i + j == n - 1)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }

    cout << "Diagonal Sum Difference: " << abs(sum1 - sum2);
}