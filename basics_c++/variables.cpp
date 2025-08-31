// not use keywords as variables 
#include<iostream>
using namespace std;
int main (){
    int x , y;  // declaration
    x = 13 ; // initialization 
    y = 2 ; // initialization 
    x = 7; //  reinitailization 
    float z = 2.5;
    float a = 6;
    --a; // pre decrement  // it read from right to left always 
    cout<<a<<endl;
    ++a; // pre increment
    cout<<a<<endl; 
    a++ ; // post increment 
    cout<<a<<endl;
    a-- ; // post decrement 
    cout<<a<<endl;
    cout<<"answer:"<<x + 13<<endl;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl; // it give round off value 
    cout<<x%y<<endl; // it print reminder  // this operator called modulus operator 
    cout<<float(x/y)<<endl;
}