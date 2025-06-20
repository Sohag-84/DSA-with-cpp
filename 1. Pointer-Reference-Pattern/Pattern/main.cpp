#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    int k = n;
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << j;
        }
        cout << endl;
        k--;
    }
}

void pattern2(int n)
{
    int k = 1, s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
            cout << " ";
        for (int j = 1; j <= k; j++)
            cout << "*";
        cout << endl;
        k += 2;
        s--;
    }
}

void pattern3(int n)
{
    int star = 2 * n - 1, space = 0;
    for (int i = n; i >= 1; --i)
    {
        for (int j = 0; j < space; j++)
            cout << " ";
        for (int j = 1; j <= star; j++)
            cout << "*";

        cout << endl;
        space++;
        star -= 2;
    }
}

void pattern4(int n)
{
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
        {
            space--;
            star += 2;
        }
        else
        {
            star -= 2;
            space++;
        }
    }
}

void pattern5(int n)
{
    int space = 1;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j <= n; j++)
            cout << j;

        for (int j = 1; j <= space; j++)
            cout << " ";
        for (int j = n; j >= k; j--)
            cout << j;
        cout << endl;
        k++;
        space += 2;
    }
}

void pattern6(int n)
{
    int star = n, space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < space; j++)
            cout << " ";
        for (int j = 1; j <= star; j++)
            cout << "*";

        cout << endl;
        space++;
        star--;
    }
}

void pattern7(int n)
{
    int space = n - 1;
    int star = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= star; j++)
            cout << "*";
        for (int j = 1; j <= space; j++)
            cout << " ";

        cout << endl;
        if (i < n)
        {
            space--;
            star++;
        }
        else
        {
            space++;
            star--;
        }
    }
}

void pattern8(int n)
{
    int space = n - 1;
    int star = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= space; j++)
            cout << " ";
        for (int j = 1; j <= star; j++)
            cout << "*";

        cout << endl;
        if (i < n)
        {
            space--;
            star++;
        }
        else
        {
            space++;
            star--;
        }
    }
}

void pattern10(int n)
{
    int star = 1, space = (n / 2) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
            cout << " ";
        for (int j = 1; j <= star; j++)
            cout << "*";
        cout << endl;
        star += 2;
        space--;
        if (i >= 6)
        {
            star = 3;
            space = 4;
        }
    }
}

int main()
{
    pattern6(6);
}