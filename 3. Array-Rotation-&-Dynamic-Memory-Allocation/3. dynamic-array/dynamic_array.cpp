#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = i;

    int *b = new int[n * 3];
    for (int i = 0; i < n; i++)
        b[i] = a[i];
    delete[] a;
    for (int i = 0; i < n * 3; i++)
        cout << b[i] << " ";
}