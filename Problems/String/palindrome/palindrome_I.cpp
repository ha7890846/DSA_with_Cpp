#include <iostream>
using namespace std;
bool checkPalindrome(string str)
{
    int start = 0;
    int end =str.length()-1;
    while(start<=end){
        if(str[start]==str[end]){
            start++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}
int main()
{
    string name;
    cout << "Enter your string:";
    getline(cin, name);
    if(checkPalindrome(name)){
        cout<<"Your string is a valid palindrome."<<endl;
    }else{
        cout<<"Your string is not valid palindrome."<<endl;
    }
    return 0;
}