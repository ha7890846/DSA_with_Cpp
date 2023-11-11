#include<iostream>
#include<vector>
using namespace std;
// find pivot using BindarySearch...
int pivot(vector<int>vect){
    int s,e;
    s=0,e=vect.size()-1;
    while(s<e){
        int mid=s+(e-s)/2;
        // These two are Order break condition...
        if(vect[mid]>vect[mid+1]){
            return mid;
        }
        if(vect[mid-1]>vect[mid]){
            return mid-1;
        }
        // BinarySearch...
        if(vect[mid]<vect[s]){
            // goto left subarray...
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n,ans;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"\t******* Enter the two sub-array as rotated Array.(Like-6,7,8,9,0,1,2) ********"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the Element value:";
        cin>>arr[i];
    }
    cout<<"Your Array:";
    for(auto v:arr){
        cout<<v<<", ";
    }
    cout<<endl;
    ans=pivot(arr);
    cout<<"The Pivot Element index is "<<ans<<"th and the element Is:"<<arr[ans]<<endl;
    return 0;
}
