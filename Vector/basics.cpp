// Vector_operation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    //initialize vector to int type, int takes 4-bytes
    vector<int>arr;
    vector<int>brr(3,-1);       //this array contain 3-times of ones..
    vector<int>crr{ 1,2,3,5,66 };
    for (int i = 0; i < 10; i++) {
        arr.push_back(i * 2);
    }
    // Print arr..
    cout << "Print arr:";
    for (auto v: arr) {
        cout << v << ", ";
    }
    cout << "\nLet's Print brr:";
    //print brr..
    for (auto v : brr) {
        cout << v << ", ";
    }
    // Print crr...
    cout << "\nLet's print crr:";
    for (auto v : crr) {
        cout << v << ", ";
    }
    // check size and capacity..
    cout << "\nThe size of arr is: " << arr.size();
    cout << "\nThe capacity of arr is: " << arr.capacity()<<endl;
    cout<<"\nThe size of brr is: "<<brr.size()<<" and the capacity is: "<<brr.capacity();
    cout<<"\nThe size of brr is: "<<crr.size()<<" and the capacity is: "<<crr.capacity();


    return 0;
}