#include<iostream>
using namespace std;
class grand_parent{
    public:
        string name;
        int age;
        string hair_colour;
        string eyes_colour;
};
// parent contains same attr as grand_parent ...
class parent:public grand_parent{
    public:
        string work;
};
// child contains same attr as parent....
class child:public parent{
    public:
        void Selected(int marks){
            if(marks > 50)
                cout<<"the candidate is Selected."<<endl;
            else{
                cout<<"Not Selected,due to low marks."<<endl;
            }
        }
        void staus(){
            cout<<"The procedure is going onward."<<endl;
        }
};
int main(){
    grand_parent dada;
    parent papa;
    child candidate;

    // Dada's Attributes...
    dada.name= "ramesh";
    dada.age = 50;
    dada.hair_colour = "Black";
    dada.eyes_colour = "blue";

    // Papa's attributes...
    papa.name= "kalidas";
    papa.age = 30;
    papa.hair_colour = "green";
    papa.eyes_colour = "cyan";
    papa.work = "farmar";
    // child's Attr....
    candidate.name= "bulbul";
    candidate.age = 12;
    candidate.hair_colour = "pink";
    candidate.eyes_colour = "brown";
    candidate.work = "Student";

    // Access of each class ...
    cout<<"\n\t\t\tDada's Properties.."<<endl;
    cout<<"Dada name: "<<dada.name<<endl;
    cout<<"Dada age : "<<dada.age<<endl;
    cout<<"Dada hair colour: "<<dada.hair_colour<<endl;
    cout<<"Dada Eyes colour: "<<dada.eyes_colour<<endl;

    cout<<"\n\t\t\tPapa's Properties.."<<endl;
    cout<<"Papa's name: "<< papa.name<<endl;
    cout<<"Papa's age : "<< papa.age<<endl;
    cout<<"Papa's hair colour: "<< papa.hair_colour<<endl;
    cout<<"Papa's Eyes colour: "<< papa.eyes_colour<<endl;
    cout<<"Papa's Work: "<<papa.work<<endl;

    cout<<"\n\t\t\tCandidat's Properties.."<<endl;
    cout<<"Child's name: "<<candidate.name<<endl;
    cout<<"Child's age : "<<candidate.age<<endl;
    cout<<"Child's hair colour: "<<candidate.hair_colour<<endl;
    cout<<"Child's Eyes colour: "<<candidate.eyes_colour<<endl;
    cout<<"Child's Work: "<<candidate.work<<endl;
    candidate.Selected(99);
    candidate.staus();
    
    return 0;

}