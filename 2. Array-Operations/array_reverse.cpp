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

    for (int i = 0; i < n / 2; i++)
    {
        // swap(arr[i],arr[n-i-1]);
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Final output: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}