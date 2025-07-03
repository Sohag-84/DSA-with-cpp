#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter row: ";
    cin >> row;
    cout << endl;
    int col;
    cout << "Enter column: ";
    cin >> col;
    cout << endl;

    int a[row][col];
    cout << "Enter first matrix value: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl;

    int b[row][col];
    cout << "Enter second matrix value: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << endl;
    int result[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Result: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}