#include<bits/stdc++.h>
using namespace std;
void initialization(){
    // string initialization ...........
    cout << "\n\n\t\t\t\t\t* Initialization * " << endl;
    string str1(10, 'a');
    // it assign 10th times of 'a'...
    cout << "str1 is: " << str1 << endl;
    // directly assign...
    string s1 = "Hello coder";
    cout << "String S1: " << s1 << endl;
    string s2;
    s2 = "Programming is love.";
    cout << "String s2: " << s2 << endl;
    // By using user input......
    string name;
    cout << "Enter Your name: ";
    getline(cin, name);
    cout << "Your name is : " << name << endl;

}


void traversing(){
    cout << "\n\n\t\t\t\t\t* Traversing Technique * " << endl;
    string quote = "Coding is Love";
    int n = quote.length();
    // By use of operator []
    cout<<"character in quote are: ";
    for(int i = 0; i<n;i++){
        cout<<"\'"<<quote[i]<<"\', ";
    }
    cout<<endl;
    // By use of at..
    cout<<"character in quote are (using at): ";
    for(int i = 0; i<n;i++){
        cout<<"\'"<< quote.at(i) <<"\', ";
    }
    cout<<endl;
    //  the last and first char in string ...
    cout<<"the first char in quote is: "<<quote.front()<<endl;
    cout<<"Ther last char in quote is: "<< quote.back() << endl;
}

void iterators(){
    cout << "\n\n\t\t\t\t\t* Iterators Function * " << endl;
    string college = "Prem prakash";
    string::iterator itr;
    itr = college.begin();
    cout<<"Return of begin itr in college: "<<*itr<<endl;
    itr = college.end()-1;
    cout<<"Returns of end itr in college name: "<< *itr<<endl;
    cout<<"Print college name chars: ";
    for(auto itr= college.begin(); itr != college.end(); itr++){
        cout<<"\' "<< *itr << "\', ";
    }
    cout<<endl;

    // reverser iterator.....
    cout<<"Print Reverse-college name chars: ";
    for(auto itr= college.rbegin(); itr != college.rend(); itr++){
        cout<<"\' "<< *itr << "\', ";
    }
    cout<<endl;

    //constant iterator.....
    cout<<"\nThe constant Itr oppose to modification in itr."<<endl;
    cout<<"The college using constant forward iterator is :"; 
    for(auto itr = college.cbegin(); itr !=college.cend(); itr++){ 
            //if(itr == str.cbegin()) *it2='G'; 
            //here modification is NOT Possible 
            //error: assignment of read-only location  
            //As it is a pointer to the const content, but we can inc/dec-rement the iterator 
            cout<<*itr; 
    } 
    cout<<endl;

}
void modification(){
    cout << "\n\n\t\t\t\t\t* Modification Function * " << endl;
    string str= "you are ";
    string str2="Writing ";
    string str3="print 10 and then 5 more";

    // used in the same order as described above:
    str.append(str2);                       // "Writing "
    
    str.append(str3,6,3);                   // "10 "
    str.append("here: ");                   // "here: "
    str.append(10,'.');                    // ".........."
    str.append(str3.begin()+9,str3.end());  // "and then 5 more"
    cout<<str<<endl;


    // Assign funciton...
    string old_quote = "coding is love";
    string new_quote;
    new_quote.assign(old_quote,7,2);
    cout<<"new quote after:limited element: "<<new_quote<<endl;
    new_quote.assign(old_quote.begin()+2,old_quote.end()-1);
    cout<<"new quote from iterator copyied: "<<new_quote<<endl;
    
    
    // insert funtion......
    str="to be question";
    str2="the ";
    str3="or not to be";
    string::iterator it;

    str.insert(6,str2);                 // to be (the )question
    str.insert(10,"to be ");            // to be not (to be )that is the question
    str.insert(10,"that is cool",8);    // to be not (that is )the question
    str.insert(6,str3,3,4);             // to be (not )the question
    str.insert(14,1,':');               // to be not to be(:) that is the question
    str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
    it = str.begin()+5;
    str.insert(it,',');
    str.insert(it+1,str3.begin(),str3.begin()+2);
    cout<<"Final string is: "<<str<<endl;
}

int main()
{
    int n;
    cout<<"choose any operation by num:"<<endl;
    cout<<"1. Initialization.\n2. traversing. \n3. iterators.\n4. modification"<<endl;
    cout<<"Enter operation Num: ";
    cin>>n;
    switch(n){
        case 1:
        initialization();
        case 2:
        traversing();
        case 3:
        iterators();
        case 4:
        modification();
        default:
        cout<<"Enter valid operation Num."<<endl;
    }
    return 0;
}