#include<bits/stdc++.h>
using namespace std;
long long powerValue(int n, int p){
    // base case.
    if(p == 0){
        return 1;
    }
    static long long ans = 1;
    ans *= n;
    powerValue(n, p-1);
    return ans;
}
int main(){
    int num,power;
    cout<<"Enter the num: ";
    cin>>num;
    
    cout<<"Enter the expo of num: ";
    cin>> power;
    cout<<"The value of "<<num<<" to the power "<<power<<" is: "<<powerValue(num,power);
    return 0;
}