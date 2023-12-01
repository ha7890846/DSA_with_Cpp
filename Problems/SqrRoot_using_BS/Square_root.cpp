#include<iostream>
using namespace std;
double sqrRoot(int a,int precision){
    int s,e;
    int ans;
    s=0;e=a-1;ans=0;
    while(s<=e){
        int mid =s +(e-s)/2;
        if(mid*mid==a){
            return mid;
        }
        if(mid*mid>a){
            //left search
            e=mid-1;
        }else{
            s=mid+1;
            ans=mid;
        }
    }
    // let's find floating point.....
    double finalAns = ans;
    double step= 0.1;
    for(int i=0;i<precision;i++){
        for(double j=finalAns;j*j<=a;j+=step){
            finalAns=j;
        }
        step= step/10;
    }
    return finalAns;
}





int main(){
    int value;
    char repeat;

    do{
    cout<<"Enter the value to find Sqr root : ";
    cin>>value;
    int precision;
    cout<<"Enter the precision value: ";
    cin>>precision;
    cout<<"the ans is :  "<<sqrRoot(value,precision)<<endl;
    cout<<"Do you want to run other value, type 'y': ";
    cin>>repeat;
    }while(repeat=='y');
    return 0;
}