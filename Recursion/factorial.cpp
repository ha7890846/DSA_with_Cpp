#include<iostream>
using namespace std;
long long fact(int n){
    //base case
    if(n == 1 || n == 0){
        return 1;
    }
    int ans = n * fact(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"The Factorial of "<<n<<" is: "<<fact(n)<<endl;
    return 0; 
}