#include<iostream>
using namespace std;
int result(int num,int& ans){
    if((num / 10) <= 0 ){
        ans += num*num;
        return ans;
    }
    int digit = num %10;
    int remains = num/10;
    result(remains,ans);    
    ans += digit*digit;
    return ans;
}
int main(){
    int num ;
    cout<<"Enter a Number: ";
    cin>>num;
    while(num/10){
        int ans = 0;
        num = result(num,ans);
    }
    cout<<"The answer is: "<<num*num<<endl;
    return 0;
}