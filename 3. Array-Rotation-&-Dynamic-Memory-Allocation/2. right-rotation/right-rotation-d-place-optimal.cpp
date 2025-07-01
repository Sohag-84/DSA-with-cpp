#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

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

    // for full array element swap
    reverse(arr, 0, n - 1);
    printArray(arr,n);
    // swap first d elements
    reverse(arr, 0, d-1);
    printArray(arr,n);
    // swap first d elements
    reverse(arr, d, n-1);
    printArray(arr,n);
}