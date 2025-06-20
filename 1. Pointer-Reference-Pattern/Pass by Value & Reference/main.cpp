#include <bits/stdc++.h>
using namespace std;
// pass by reference
void ref(int *p)
{
    cout << "address of p: " << *p << endl;
}
// pass by value
void func(int a)
{
    a = 100;
    cout << "address of a: " << &a << endl;
}

void arrFunc(int arr[])
{
    arr[0] = 45;
}

int main()
{
    int a = 90;
    func(a);
    cout << a << endl;
    ref(&a);
    cout << "address of a: " << &a << endl;

    int ar[] = {1, 2, 3, 4, 5, 6};
    arrFunc(ar);
    cout << ar[0];
    return 0;
}