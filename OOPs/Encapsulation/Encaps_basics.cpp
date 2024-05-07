#include<iostream>
using namespace std;
class playerDetails{
    // without marking of type it set as private by default....
    // Data Member of class....
    private:
        int weight;
        string type;

    public:
        int age;
        string name;



    // Data Function of classs....
    void gameName(){
        cout<<"he is an eSport player."<<endl;
    }
    // a public type getter & setter used to access private data member...
    // they are not accesible directly calls......... 
    int setWeight(int w){
        return this->weight = w;
    }
    void getWeight(){
        cout<<"The weight is: "<<this->weight<<endl;
    }
    string setType(string type){
        return this->type = type;
    }
    void getType(){
        cout<<"The player Type: "<<this->type<<endl;
    }

};
int main(){
    playerDetails player1;
    player1.name = "charlie";
    player1.age = 23;
    cout<<"The Player name is: "<<player1.name<<endl;
    cout<<"The Player age is: "<<player1.age<<endl;
    player1.gameName();

    // private data member are not accesible through direct call;
    // we need to indirect call using getter and setter....]
    
    // "Setter"
    string str;
    int weight ;
    cout<<"Enter the player Type: ";
    cin>>str;
    player1.setType(str);
    cout<<"Enter the player weight: ";
    cin>>weight;
    player1.setWeight(weight);
    // "Getter "
    player1.getType();
    player1.getWeight();





    // Player 2 details...
    cout<<"\n\t\t\t\t\tPlayer 2 Information."<<endl;
    playerDetails player2;
    player2.name = "charlie";
    player2.age = 23;
    cout<<"The Player 2  name is: "<<player2.name<<endl;
    cout<<"The Player 2 age is: "<<player2.age<<endl;
    player2.gameName();

    // private data member are not accesible through direct call;
    // we need to indirect call using getter and setter....]
    
    // "Setter"
    cout<<"Enter the player 2 Type: ";
    cin>>str;
    player2.setType(str);
    cout<<"Enter the player 2 weight: ";
    cin>>weight;
    player2.setWeight(weight);
    // "Getter "
    player2.getType();
    player2.getWeight();
    return 0;
}