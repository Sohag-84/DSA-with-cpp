#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/add-digits/description/

int addDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int temp = num % 10;
        sum += temp;
        num = num / 10;
    }
    if (sum < 10)
    {
        return sum;
    }
    else
    {
        return addDigits(sum);
    }
}

int main()
{
    int n = 38;
    cout << addDigits(n);

    return 0;
}