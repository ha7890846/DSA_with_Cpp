
#include <iostream>
#include<typeinfo>
using namespace std;
int main()
{
    int a = 10;
    float b = float(a);
    cout<<b<<endl;
    cout<<typeid(b).name()<<endl;
    return 0;
}
