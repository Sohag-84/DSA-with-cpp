#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[3][3], int element)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == element)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {12, 2, 13},
        {5, 6, 7},
    };
    if (linearSearch(arr, 2))
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
}