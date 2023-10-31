#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
//print to 2d vector function..
void printVec(vector<vector<int>>arr){
    for(auto v:arr){
        for(auto t:v){
            cout<<t<<", ";
        }
        cout<<endl;
    }
    cout<<endl;
}
//  Function to find and print out 
void max_minEle(vector<vector<int>>arr){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int maxi_indx=-1;
    for(auto v:arr){
        for(auto i:v){
            if(i>maxi){
                maxi=i;
                
            }
            if(i<mini){
                mini=i;
            }
       }
    }
    cout<<"The max element is:"<<maxi<<endl;
    cout<<"The Min element is:"<<mini<<endl;
}
int main()
{


    vector<vector<int>>vect1{
    {1,2,3,9},
    {8,9,3,9},
    {3,8,3,90}
    };
    printVec(vect1);
    max_minEle(vect1);
    return 0;
}