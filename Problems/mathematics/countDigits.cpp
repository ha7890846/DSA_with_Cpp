#include <iostream>
using namespace std;
int main()
{
    // we are using ( long long ) as it support range -2^63 to 2^63-1
    // that is twice of int value range
    long long number;
    cout << "Enter the number:";
    cin >> number;
    int count = 0;
    while (number > 0)
    {
        number = number / 10;
        count++;
    }
    cout << "The digits in the Number is:" << count << endl;
    return 0;
}