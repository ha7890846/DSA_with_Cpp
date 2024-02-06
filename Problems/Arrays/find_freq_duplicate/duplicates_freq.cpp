#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n,element;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>array;
    for(auto i =0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>element;
        array.push_back(element);
    }
    cout<<"\nThe vector is: ";
    for(auto v:array){
        cout<<v<<", ";
    }
    cout<<endl;
    unordered_map<int,int>map;
    for(int i= 0;i<array.size();i++){
        map[array[i]]++;
    }
    for(auto it = map.begin();it != map.end();it++){
        cout<<"Element "<<it->first<<" - Freq -> "<<it->second<<endl;
        if((it->second)>2){
            cout<<"element that has duplicates: "<<it->first<<endl;
        }
    }
    return 0;
}