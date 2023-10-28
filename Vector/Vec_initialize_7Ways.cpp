#include <iostream>
#include <vector>
#include <numeric> // for auto numeric value iota() fn..
using namespace std;
void printStar()
{
    // star print to separation code...
    for (int i = 0; i < 10; i++)
    {
        cout << "* * ";
    }
    cout << endl;
}
void printVec(vector<int> vec)
{
    for (auto v : vec)
    {
        cout << v << ", ";
    }
    cout << endl;
}
int main()
{
    // Initialize vec by pushing value one by one...
    vector<int> marks;
    // pushback value one by one..
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(40);
    marks.push_back(50);
    cout << "Here we are printing marks: ";
    printVec(marks);
    printStar();

    // Initialize vec by using same value upto n number...
    int n;
    cout << "\nEnter the size of vec:";
    cin >> n;
    vector<int> sameNum(n, -5); // here we can put any Int num directly...
    printVec(sameNum);
    // it can also be done with fill() fn..But this fn is used with limiting location(from to upto.)
    vector<int> same2(n);
    int value;
    cout << "\nEnter the value for the vec:";
    cin >> value;
    if(n>1){
        //it would insert value into vect from 1st index to last indx..
        fill(same2.begin()+1, same2.end(), value);
        printVec(same2);
    }else{
        cout<<"Length of vector is lower than 1.";
    }
    printStar();

    // Initialize vec from an array...
    int arr[] = {1, 2, 3, 4, 5};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    cout<<"Printing the initialized array:";
    for(int i=0;i<size_arr;i++){
        //printing array..
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    //Here we can provided the location by index to copy from to upto lacation...
    vector<int> arrVec(arr+1, arr + size_arr);
    cout << "printing Vec from array:";
    printVec(arrVec);
    printStar();

    // initialize vec directly as array..
    vector<int> vec1{2, 3, 5, 6, 7, 8};
    cout << "printing vec directly initialized:";
    printVec(vec1);
    printStar();

    // Initilize vec from another vec...location can be specified..
    vector<int> copyVec(sameNum.begin()+1, sameNum.end());
    cout << "printing copied array from another vec:";
    printVec(copyVec);
    printStar();

    // Initialize vec for auto consecutive numeric..
    int upto, starting_value;
    cout << "\nEnter the size of vec to initialize:";
    cin >> upto;
    vector<int> autoNum(upto);
    cout << "Enter the starting value:";
    cin >> starting_value;
    iota(autoNum.begin(), autoNum.end(), starting_value);
    cout << "printing autoNum vec:";
    printVec(autoNum);

    return 0;
}