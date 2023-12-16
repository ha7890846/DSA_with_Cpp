#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name1[100] = "charlie";
    char name2[100] = "habib";
    int size_name1= sizeof(name1)/sizeof(name1[0]);
    int size_name2 = sizeof(name2)/sizeof(name2[0]);
    char full_name[200];
    int i=0;
    int j=0;
    for(i;name1[i] !='\0';i++){
        full_name[i]=name1[i];
    }
    for(i,j;name2[j]!='\0';i++,j++){
        full_name[i]=name2[j];
    }
    cout<<"full naem:"<<full_name<<endl;
    cout<<(bool)strcmp(name1,name2);
    return 0;
}