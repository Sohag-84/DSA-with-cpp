#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    int arr[n];
    cin >> n;
    cout << endl;
    cout << "Enter " << n << " Element on this Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << endl;

    int index;
    cout << "Enter the delete value index: ";
    cin >> index;

    for (int i = index; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "Final output: " << endl;
    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i] << " ";
    }
}