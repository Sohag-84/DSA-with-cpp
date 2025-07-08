#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

int main()
{
    int row, col;
    cout << "Enter row and coloum: ";
    cin >> row >> col;
    int arr[row][col];
    cout << "Enter the array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int input;
    cout << "Enter the search number: ";

    cin >> input;
    bool ans = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == input)
            {
                ans = true;
            }
        }
    }
    if (ans)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }

    return 0;
}