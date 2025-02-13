#include <iostream>
#include <math.h>
using namespace std;

int bruteForce(int number){
    int count = 0;
    while (number > 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}
int optimized(int number){
    return log10(number) + 1;   // log10(number) will give the number of digits in the number
}
int main()
{
    // we are using ( long long ) as it support range -2^63 to 2^63-1
    // that is twice of int value range
    long long number;
    cout << "Enter the number:";
    cin >> number;
    cout << "The digits in the Number is (bruteForce):" << bruteForce(number) << endl;
    cout << "The digits in the Number is (optimized):" << optimized(number) << endl;
    return 0;
}