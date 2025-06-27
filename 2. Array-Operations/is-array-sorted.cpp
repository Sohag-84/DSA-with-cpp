#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;
    cout << "Enter the array elements: ";
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool ans = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
}