#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 3, 4, 5, 6};
    int *p = &a[2];
    cout << *(p - 1) << endl;
    cout << "value of a[0]: " << *a << endl;
    cout << "value of a[1]: " << &a[1] << endl;
    return 0;
}
