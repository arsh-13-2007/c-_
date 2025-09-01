#include<iostream>
using namespace std; 
int main (){
    // call by reference
    int x = 3 ; 
    int *p = &x; // it store address
    cout<<p<<endl;  // it print address of x 
    cout<<&x<<endl; // it print address of x 
    cout<<*p<<endl; 
    cout<<x<<endl; 
}