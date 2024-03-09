#include<iostream>
#include<vector>
using namespace std;
void printSeq(string s, int index ,string output ){
    if( index >= s.length() ){
        cout<<"The Subset of string is: "<<output<<endl;
        return;
    }
    // Includeing the element in output term.....
    printSeq(s,index+1,output+s[index]);
    // Excluding the element in output term... 
    printSeq(s, index+1, output);
    return;
}

int main(){
    string s = "abc";
    int i = 0 ;
    string output_str = " ";
    printSeq(s,i,output_str);
    return 0;
} 
