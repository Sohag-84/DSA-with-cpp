#include <bits/stdc++.h>
using namespace std;

int main()
{
    string path = "/user/code/hello.cpp";
    int positon = path.find_last_of("/");
    string ans = path.substr(positon + 1);
    cout << ans;
    return 0;
}