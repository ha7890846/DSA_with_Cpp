#include<iostream>
using namespace std;
class physics{
    public:
        int marks = 55;
};
class maths{
    public:
        int question = 93;
};
class student:public physics,public maths{
    public:
        void status(){
            cout<<"He is a good boy."<<endl;
        }
};



int main(){
    student pankaj;
    cout<<"marks obtained in physics Is: " <<pankaj.marks<<endl;
    cout<<"Total done no of question is: "<<pankaj.question<<endl;
    pankaj.status();

    return 0;
}