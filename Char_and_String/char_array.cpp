#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[]={'a','b','c','\0'};
    char string[]="chalri";
    cout<<name<<endl;
    cout<<string<<endl;
    int count =0;
    int i=0;
    for(int i=0;i<5;i++){
        cout<<"index"<<i<<":"<<name[i]<<endl;
    }
    cout<<"coount"<<count<<endl;
    cout<<"The length of string is:"<<strlen(string)<<endl;
    cout<<"concatenation:"<<strcat(name,string)<<endl;
    cout<<"copy function retrieva: "<<strncpy(name,string,3);
    cout<<"compare: "<<strcmp(name,string)<<endl;
    char str1[]="here is the output";
    char str2[]="is";
    cout<<"find str:"<<strstr(str1,str2);
    return 0;
}