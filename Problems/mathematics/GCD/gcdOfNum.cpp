#include<iostream>
using namespace std;
int lcmAndGcd(int a,int b){
    int gcd,lcm;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    cout<<"The GCD and LCM are: "<<gcd<<", "<<lcm<<endl;
    return 0;
}
// Better Approach:
int betterGcd(int a,int b){
    int gcd;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            break;
        }
    }
    return gcd;
}

// Eucledian Algorithm
int findGcd(int a, int b) {

    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}
// Euclidean Algorithm to find GCD of two numbers
// Recursive function to return gcd of a and b
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"The GCD and LCM are (Iterative Naive): "<<lcmAndGcd(a,b);
    cout<<"The GCD of the two numbers is(Euclidean Iterative): "<<findGcd(a,b)<<endl;
    cout<<"The GCD of the two numbers is(Better): "<<betterGcd(a,b)<<endl;
    cout<<"The GCD of the two numbers is(Euclidean Recu): "<<gcd(a,b)<<endl;
    return 0;
}