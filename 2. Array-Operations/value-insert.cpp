#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    int arr[n + 1];
    cin >> n;
    cout << endl;
    cout << "Enter array value:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << endl;
    int index, replaceValue;
    cout << "Enter the index : ";
    cin >> index;
    cout << endl
         << "Enter the value: ";
    cin >> replaceValue;

    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = replaceValue;

    for (int i = 0; i < (n + 1); i++)
    {
        cout << arr[i] << " ";
    }
}