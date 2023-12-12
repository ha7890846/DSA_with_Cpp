#include<iostream>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter Your String in UPPER CASE: ";
    // to get full name, use getline fn to neglect termination key '\0' 
    cin.getline(name,50);
    cout<<"Your String: "<<name<<endl;
    int i=0;
    int size;
    cout<<"Enter the count of char you entered: ";
    cin>>size;
    // SPACE also be counted....
    while(i<size){
        if(name[i] == ' '){
            i++;
            continue;
        }else{
        name [i++] = name[i]-'A'+'a';
        }
    }
    cout<<name;
    return 0;
}