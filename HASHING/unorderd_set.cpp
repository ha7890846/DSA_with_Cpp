#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>m;
    m.insert(15);
    m.insert(189);
    m.insert(153);
    cout<<"\nEntered Hashset: ";
    for(auto it = m.begin(); it!=m.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<"\nVector element: ";
    vector<int>arr{1,2,3,4,5,1,5,7,8,0};
    for(auto v:arr){
        cout<<v<<" ";
    }

    cout<<"\n\t\t\tNote: hashset ignores Multiple same element"<<endl;
    cout<<"\nCopied hashset: ";
    // copy the item of arr into hash set
    unordered_set<int>copy(arr.begin(),arr.end());
    for(auto it = copy.begin();it!=copy.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}