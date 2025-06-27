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

    int result[n + m];
    int firstPointer = 0;
    int secondPointer = 0;
    int k = 0;

    while (firstPointer < n && secondPointer < m)
    {
        if (firstArray[firstPointer] < secondArray[secondPointer])
        {
            result[k++] = firstArray[firstPointer];
            firstPointer++;
        }
        else
        {
            result[k++] = secondArray[secondPointer];
            secondPointer++;
        }
    }

    while(firstPointer<n) result[k++] = firstArray[firstPointer++];
    while(secondPointer<m) result[k++] = secondArray[secondPointer++];

    cout << "Final Output: " << endl;
    for (int i = 0; i < n + m; i++)
    { 
        cout << result[i]<<" ";
    }

    return 0;
}