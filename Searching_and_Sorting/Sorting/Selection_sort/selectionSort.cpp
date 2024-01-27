#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers{6,8,11,10,9,4,2,7,5,1};
    for(int i=0;i<numbers.size()-1;i++){
        int mini = i;
        for(int j=i+1;j<numbers.size();j++){
            if(numbers[j]<numbers[mini]){
                mini = j;
            }
        }
        swap(numbers[i],numbers[mini]);
    }

    for(auto v:numbers){
        cout<<v<<", ";
    }
    cout<<endl;
    return 0;
}