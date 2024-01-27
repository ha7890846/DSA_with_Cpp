// program for factorial small number from 0 to 12..
// it may be compiler dependent..
#include<iostream>
using namespace std;
long long facto(int number){
    // Base Condition ....
    if(number == 0 ){
        return 1;
    }
    int ans = number*facto(number-1);
    return ans;
}
int itr_facto(int num){
    int ans = 1;
    while(num){
        ans = ans*num;
        num--;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number range(1-12):";
    cin>>n;
    cout<<"The Factorial of the number is( Recursive method ): "<<facto(n)<<endl;
    cout<<"The Factorial of the Number is ( iterative method ): "<<itr_facto(n)<<endl;
    return 0;
}