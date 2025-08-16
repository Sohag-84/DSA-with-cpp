#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string name = "Injamul ha";
    // name.push_back('q');
    // Direct access (no bounds check)
    // cout << "First way: " << name[6] << endl;
    // Safe access (throws exception if out of bounds)
    // cout << "Safe way: " << name.at(6);

    // string name = "Sohag";
    // cout << "Size: " << name.size() << endl;
    // cout << "Allocated storage capacity: " << name.capacity() << endl;

    // Removes unused capacity (non-binding request)
    // name.shrink_to_fit();
    // cout << "Now capacity is: " << name.size() << endl;
    // cout << "Now allocated storage capacity: " << name.capacity() << endl;

    // string s = "Hello";
    // cout << "Size: " << s.size() << endl;

    /// insert and erase
    // s.insert(1, "!");
    // cout << s[1] << " " << s[2] << endl;
    // cout << "Before erasing: " << s << endl;
    // s.erase(1, 1);
    // cout << "After erasing: " << s << endl;

    /// sort
    // sort(s.begin(), s.end());
    // sort(s.begin(), s.end(), greater<char>());
    // cout << "After sorting: " << s << endl;

    /// reverse
    // string name = "sohag";
    // cout << "Size: " << name.size() << endl;
    // reverse(name.begin(), name.end());
    // cout << "After reversing: " << name << endl;

    /// Get Unique Characters
    // string s = "eeeeeaaaabbbdddccc";
    // sort(s.begin(), s.end());
    // cout << "Output after sorting: " << s << endl;
    // auto last = unique(s.begin(), s.end());
    // cout << *last << endl;
    // cout << *s.end() - 3 << endl;
    // s.erase(last, s.end());
    // cout << "Output: " << s << endl;

    /// Get words using strinstream and getline
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }
}