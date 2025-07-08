#include <bits/stdc++.h>
using namespace std;

// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X

bool valid(int i, int j, int row, int col)
{
    if (i >= 0 && j >= 0 && i < row && j < col)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int row, col;
    cin >> row >> col;
    char arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    // for problem rules in codeforces
    x--;
    y--;
    int dx[] = {0, 0, -1, 1, -1, 1, 1, -1};
    int dy[] = {1, -1, 0, 0, 1, 1, -1, -1};

    bool ans = true;

    for (int i = 0; i < 8; i++)
    {
        int ni = x + dx[i];
        int nj = y + dy[i];
        if (valid(ni, nj, row, col) && arr[ni][nj] != 'x')
        {
            ans = false;
        }
    }

    if (ans)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}

// input pattern
// input->1
//  3 3
//  xxx
//  xxx
//  xxx
//  1 1
//  ans: yes

// input->2
//  3 3
//  xxx
//  x.x
//  xxx
//  2 2
//  ans: yes

// input->2
//  3 3
//  xxx
//  xxx
//  xx.
//  2 2
//  ans: no
