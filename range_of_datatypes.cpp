#include<iostream>
#include<string>
#include<limits.h>
using namespace std;
int main(){
    int mini = INT_MIN;
    int max = INT_MAX;
    float a;
    long long b;
    char chr ;
    string str ;
    cout<<"size of string : "<<sizeof(str)<<endl;
    cout<<"size of char: "<<sizeof(chr)<<endl;
    cout<<"size of long long: "<<sizeof(b)<<endl;
    cout<<"size of float: "<<sizeof(a)<<endl;
    cout<<"size of int: "<<sizeof(mini)<<endl;
    cout<<"min and max "<<mini<<" "<<max<<endl;
    return 0;
}