#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void printVect(vector<int>vect){
    for(auto v:vect){
        cout<<v<<", ";
    }
    cout<<endl;
}
void usingSort(vector<int>vec){
    // It maints the sorting
    sort(vec.begin(),vec.end());
    cout<<"Vector after sort STL:";
    for(auto it:vec){
        cout<<it<<", ";
    }
    cout<<endl;
}



int main(){
    vector<int>arr{-1,2,3,3,-3,5,-6,-2};
    cout<<"The Original vector:";
    printVect(arr);
    // this method doesnot sort the vector......
    int s=0;
    int e=arr.size()-1;
    while(s<=e){
        if(arr[s]<0){
            s++;
        }else{
            swap(arr[s],arr[e]);
            e--;
        }
    }
    //usingSort(arr);
    cout<<"solved Vector:";
    printVect(arr);
    return 0;
}