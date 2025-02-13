#include<iostream>
using namespace std;
int bruteForce(int num){
    string str = to_string(num);
    int s = 0;
    int e = str.size()-1;
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
    return stoi(str);
}
int optimized(int num){
    int rev = 0;
    while(num>0){
        rev = rev*10 + num%10;
        num = num/10;
    }
    return rev;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The reverse of the number is: "<<bruteForce(num)<<endl;
    cout<<"The reverse of the number is: "<<optimized(num)<<endl;
    return 0;
}