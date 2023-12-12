#include<iostream>
#include<limits>        // use for cin.ignore fn...
using namespace std;
int main(){
    int length;
    char quote[100];
    cout<<"Enter Your characters length: ";
    cin>>length;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear buffer before taking new input...
    cout<<"Enter your sentense:";
    cin.getline(quote,length);
    cout<<quote<<endl;
    for(int i=0;i<length;i++){
        if(quote[i] == ' '){
            quote[i] = '@';
        }
    }
    cout<<quote<<endl;
    return 0;
}