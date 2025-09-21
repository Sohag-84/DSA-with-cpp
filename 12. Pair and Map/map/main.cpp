#include <bits/stdc++.h>
using namespace std;

void printMap(map<string, string> &mp)
{
    for (auto data : mp)
    {
        cout << data.first << " " << data.second << endl;
    }
}

void eraseMapData(map<string, string> &mp, string key){
    mp.erase(key);
}

int main()
{
    map<string, string> studentDatabase;

    studentDatabase["CSE48"] = "Sohag";
    studentDatabase["CSE49"] = "Nahid";
    studentDatabase["CSE50"] = "Rabby";

    printMap(studentDatabase);
    eraseMapData(studentDatabase,"CSE48");
    cout<<"=======After erasing data=======\n";
    printMap(studentDatabase);

    return 0;
}