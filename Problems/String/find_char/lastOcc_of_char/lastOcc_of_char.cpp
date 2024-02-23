#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int main()
{
    string str = "Coding is easy is";
    string x = "is";
    int rev_found = str.rfind(x);
    int found = str.find(x);
    int i = 0;
    while (found != string::npos)
    {
        cout <<"The first index of x is: "<< found<<endl;
        cout<<"The last index of x: "<<rev_found<<endl;
        break;
    }
    return 0;
}