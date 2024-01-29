#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>m;
    m.insert(15);
    m.insert(189);
    m.insert(15143);
    for(auto it = m.begin(); it!=m.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    return 0;
}