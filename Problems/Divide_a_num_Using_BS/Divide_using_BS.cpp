#include<iostream>
using namespace std;
int main(){
    int dividend,divisor;
    cout<<"Enter the dividend and Divisor in order: ";
    cin>>dividend>>divisor;
    //Binary search Algo .....
    int s=0;
    int e=abs(dividend);
    int ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(abs(mid*divisor)==abs(dividend)){
            ans = mid;
        }
        if(abs(mid*divisor)>abs(dividend)){
            //left search ...
            e=mid-1;
        }else{
            ans =mid;
            s=mid+1;
        }
    }
    // for signed value
    // condition...
    if((dividend<0 && divisor<0) || (dividend>0 && divisor>0 )){
        cout<<"The ans is: "<<ans<<endl;
    }else{
    cout<<"The ans is: "<<-ans<<endl;
    }
    return 0;
}