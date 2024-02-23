#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int main()
{
    string str = "Coding is easy is";
    string x = "is";
    int found = str.rfind(x);
    int i = 0;
    while (found != string::npos)
    {
        cout << found;
        break;
    }
    return 0;
}