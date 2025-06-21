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

    int start = 0;
    int end = n - 1;

   while(start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start ++;
    end--;
   }

    cout << "Final output: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}