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

    int d;
    cout << "Enter the shift place: ";
    cin >> d;
    // Handle edge case where d > n
    d = d % n;
    int temp[d];

    // Store first d elements in temp
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    // Shift remaining elements to the left
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    int j = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[j];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}