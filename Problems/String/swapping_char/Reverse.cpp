#include <iostream>
using namespace std;
void reverseStr(string name)
{
    int start = 0;
    int end = name.length() - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
    cout << "\nAfter Reverse String: ";
    cout << name;
}
int main()
{
    string s;
    cout << "Enter the your string: ";
    getline(cin, s);
    cout << "your String: ";
    cout << s;
    reverseStr(s);
    return 0;
}