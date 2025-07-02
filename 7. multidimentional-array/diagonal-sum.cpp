#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {12, 2, 13},
        {5, 6, 7},
    };
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[3 - i - 1][i];
        if (3 - i - 1 == i)
        {
            sum2 -= arr[3 - i - 1][i];
        }
    }
    cout << "Diagonal Sum: " << sum1 + sum2;
}