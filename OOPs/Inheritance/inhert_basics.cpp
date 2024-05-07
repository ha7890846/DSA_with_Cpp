#include<iostream>
using namespace std;
class parent{
    public:
     string name= "charlie";
     int age= 18;

};
class child:public parent{
    public:
     string course= "b.tech";

};

int main(){
    child student;
    parent guardian;
    student.name = "Habib shah";
    student.age = 23;
    student.course = "B.tech";
    
    guardian.name = "ShamSher Shah";
    guardian.age = 44;


    cout<<"The Student name is: "<<student.name<<endl;
    cout<<"The Guardian name : "<<guardian.name<<endl;
    cout<<"The Student age: "<<student.age<<endl;
    cout<<"The Guardian age: "<<guardian.age<<endl;
    cout<<"The Student Course: "<<student.course<<endl;
    return 0;
}