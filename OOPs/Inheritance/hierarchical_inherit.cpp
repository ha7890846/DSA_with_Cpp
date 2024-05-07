#include<iostream>
using namespace std;
class bike{
    public:
        string model;
        int CC;
        int modal;
};
class hero:public bike{
    public:
        void hero_quality(){
            cout<<"It is the best in budget and have extra mileage"<<endl;
        }
};
class honda:public bike{
    public:
        void honda_quality(){
            cout<<"The Honda provides competitive Build Quality."<<endl;
        }
};




int main(){
    hero splendor;
    honda shine;

    cout<<"\n\t\t\t\t Bike Specification"<<endl;
    splendor.model = "splendor Plus";
    splendor.modal = 2013;
    splendor.CC = 125;
    cout<<"Splendor model is: "<<splendor.model<<endl;
    cout<<"Splendor modal is: "<<splendor.modal<<endl;
    cout<<"Splendor The Cylender size: "<<splendor.CC<<endl;
    splendor.hero_quality();



    
    cout<<"\n\t\t\t\t BikeSpecificatio"<<endl;
    shine.model = "Shine Plus";
    shine.modal = 2015;
    shine.CC = 150;
    cout<<"Shine model is: "<<shine.model<<endl;
    cout<<"Shine modal is: "<<shine.modal<<endl;
    cout<<"Shine The Cylender size: "<<shine.CC<<endl;
    shine.honda_quality();


    return 0;
}