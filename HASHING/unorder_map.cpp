#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>mapp;
        mapp[5]="chalri";
        mapp[10]= "shen";
        mapp[15]= "HABIB";
    for(auto it= mapp.begin(); it != mapp.end();it++){
        cout<<it->first<<"--"<<it->second<<endl;
    }
    auto it = mapp.find(5);
    if(it != mapp.end()){
        cout<<"found "<<it->second<<endl;
    }
    return 0;
}