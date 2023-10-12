#include<iostream>
#include<vector>
using namespace std;

void printStar(){
    for(int i=0;i<20;i++){
        cout<<"* * ";
    }
    cout<<endl;
}

    //passing vec by Reference value...
void printVec(vector<vector<int>>&arr){
      
    for (int i = 0; i < arr.size(); i++) 
    { 
        for (int j = 0; j < arr[i].size(); j++) 
        { 
            cout << arr[i][j] << " "; 
        }     
        cout << endl; 
    } 
    cout<<endl;
}
 //Passing vec by Ref and printing with auto keyword.....
void printByAuto(vector<vector<int>>&brr){
    cout<<"Printing vec using for(auto):"<<endl;
    //printing 2d vec..
    for(auto it:brr){
        //now it is a 1d vec..thus
        for(auto v:it){
            cout<<v<<", ";
        }
        cout<<endl;
    }
} 


int main(){
    //declare of a 2d vec....
    int rows,cols;
    cout<<endl;
    printStar();
    cout<<"Enter the no of Rows & Column of inventory respectively:";
    cin>>rows>>cols;
    
    vector<vector<int>>inventory_item(rows,vector<int>(cols,3));
    cout<<"\nprinting a 2d vector:"<<endl;
    printVec(inventory_item);
    printByAuto(inventory_item);
    printStar();
// Now the method to push a vec into empty vec iteratively...
    //empty 2d vec..
    vector<vector<int>>emptyVec;
    int emptyVec_rows;
    cout<<"Enter The no of row to 2d emptyVec:";
    cin>>emptyVec_rows;

    // 1d vector...
    vector<int>vecToCopy{1,23,43,4,35,34,4};
    // now push 1d vector into empty vec...
    for(int i=0;i<emptyVec_rows;i++){
        emptyVec.push_back(vecToCopy);
    }
    printByAuto(emptyVec);
    printStar();



    return 0;
}