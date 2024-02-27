#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&vect,int s, int e){
    cout<<"the value s and e: "<<s<<", "<<e <<endl;
    cout<<endl;
    cout<<"the value of s and e with ar: "<<vect[s]<<vect[e]<<endl;
    int mid = s + (e-s )/2;
    int size1 = mid+1-s;
    int size2 = e - mid;
    vector<int>left(size1);
    vector<int>right(size2);
    int k = s;
    for(int i = 0;i<size1;i++){
        left[i] = vect[k];
        k++;
    }
    k = mid+1;
    for(int i =0;i<size2;i++){
        right[i] = vect[k];
        k++;
    }
    int left_Index = 0;
    int right_Index = 0;
    int main_Index = s;
    while( left_Index < size1 && right_Index< size2){
        if(left[left_Index] < right[right_Index]){
            cout<<"Before vect mainIndex: "<<left[left_Index]<<vect[main_Index]<<endl;
            vect[main_Index] = left[left_Index];
            cout<<"Pushing the left value: "<<left[left_Index]<<", "<<vect[main_Index]<<endl;
            left_Index++;
            main_Index++;
        }
        else{
            vect[main_Index] = right[right_Index];
            right_Index++;
            main_Index++;
        }
    }
    while(left_Index < size1){
        cout<<"the value of left: "<<left[left_Index]<<endl;
        vect[main_Index] = left[left_Index];
        left_Index++;
        main_Index++;
    }
    while(right_Index < size2){
        cout<<"The value of right: "<<right[right_Index]<<endl;
        vect[main_Index] = right[right_Index];
            right_Index++;
            main_Index++;
    }

    cout<<"after merge aray: ";
    for(auto v:vect){
        cout<<v<<", ";
    }
    cout<<"\n The first merge completed."<<endl;
    cout<<"##############################################"<<endl;
}
void mergeSort(vector<int>&vect,int s, int e){
    //base case ..
    if(s >= e ){
        return;
    }
    cout<<"the s and e: "<<s<<", "<<e<<endl;
    int mid = s + (e-s)/2;
    cout<<"The mid: "<<mid<<endl;
    mergeSort(vect,s,mid);
    cout<<"second fn works: "<<endl;
    mergeSort(vect,mid+1,e);
    cout<<"Now calls merge: "<<endl;
    cout<<"******************************************************"<<endl;
    merge(vect,s,e);
}
int main(){
    vector<int>arr{24,20,14,7,18,27,32,40};
    int s = 0;
    int e =arr.size()-1;
    mergeSort(arr,s,e);
    for(auto v: arr){
        cout<<v<<", ";
    }



    return 0;
}