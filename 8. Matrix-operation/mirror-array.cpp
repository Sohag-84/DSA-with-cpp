#include <bits/stdc++.h>
using namespace std;

// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

int main()
{

    int row, col;
    cout << "Enter row and colum: ";

    cin >> row >> col;
    int arr[row][col];
    cout << "Enter the array values: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        int first = 0, last = col - 1;
        while (first < last)
        {
            swap(arr[i][first], arr[i][last]);
            first++;
            last--;
        }
    }
    cout << "Final output: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}