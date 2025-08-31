#include<iostream>
using namespace std;
// void , int , etc. in function are return type 
void greet(){ 
    cout<<"good morning"<<endl;
    cout<<"how are you"<<endl;
}
void country(){
    cout<<"i am  in india\n";
}
int main (){
    greet(); // function call 
    cout<<"where are you\n";
    country(); // function call 
    
}