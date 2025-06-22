#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the first array size: ";
    cin >> n;
    int firstArray[n];
    cout << endl
         << "Enter the " << n << " element on array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> firstArray[i];

    int m;
    cout << "Enter the second array size: ";
    cin >> m;
    int secondArray[m];
    cout << endl
         << "Enter the " << m << " element on array: " << endl;
    for (int i = 0; i < m; i++)
        cin >> secondArray[i];

    int k = 0;
    int arr[n + m];
    for (int i = 0; i < n; i++)
    {
        arr[k] = firstArray[i];
        k++;
    }
    cout << "Value of k: " << k;
    for (int i = 0; i <= m; i++)
    {
        arr[k] = secondArray[i];
        k++;
    }

    cout << "Merged array output: " << endl;
    for (int i = 0; i < (n + m); i++)
    {
        cout << arr[i] << " ";
    }
}