#include<iostream>
using namespace std;
int result(int num,int& ans){
    if((num / 10) <= 0 ){
        ans += num*num;
        cout<<" upper ans: "<<ans<<endl;
        return ans;
    }
    int digit = num %10;
    int remains = num/10;
    result(remains,ans);    
    ans += digit*digit;
    cout<<"lower ans: "<<ans<<endl;
    return ans;
}
int main(){
    int num ;
    cin>>num;
    while(num/10){
        int ans = 0;
        num = result(num,ans);
    }
    cout<<num*num<<endl;
    return 0;
}