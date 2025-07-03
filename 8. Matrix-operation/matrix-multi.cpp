#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p;
    cin >> m >> n;
    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // second array
    cin >> n >> p;
    int b[n][p];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << endl;

    // resutl
    int result[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

// input
// 2 3
// 1 2 3
// 3 2 1

// 3 4
// 1 2 3 4
// 0 1 2 3
// 1 2 1 0