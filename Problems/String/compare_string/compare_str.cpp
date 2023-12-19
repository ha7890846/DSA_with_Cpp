#include<iostream>
#include<limits>
using namespace std;
int main(){
    // Operator Method: 
    string str1 = "charlie";
    string str2 = "habib";
    if(str1!=str2){
        cout<<"not Equal str"<<endl;
    }else{
        cout<<"Equal"<<endl;
    }
    char arr1[5]={'a','b','c','d','\0'};
    char arr2[5]={'d','f','g','a','\0'};
    for(int i=0;i<5;i++){
        if(arr1[i]!=arr2[i]){
            cout<<"not equal arr"<<endl;
            break;
        }
        else{
            cout<<"Equal char"<<endl;
        }
    }
    char name1, name2;
    cout<<"enter your name ";
    cin>>name1;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"enter your name 2";
    cin>>name2;
    if(name1!=name2){
        cout<<"Not Equal name 1& name2"<<endl;
    }else{
        cout<<"Both are Equal name1 & name2";
    }
    string student="charlie";
    string student1="Charlie";
    // compare with a limit 
    // here we state limit from 0-5 index (ignore 0 till 5th) with sec string same limit
    if(student.compare(0,5,student1,0,5)){
        cout<<"studnet is same"<<endl;
    }else{
        cout<<"student is not same"<<endl;
    }
    return 0;
}