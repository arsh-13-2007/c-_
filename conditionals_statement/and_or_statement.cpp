#include<iostream>
using namespace std; 
int main (){
    int n;
    cout << "enter number:";
    cin >> n;
    if (n > 99 && n < 1000){
        cout<<"number is three digit" ;
    }
    else {
        cout<<"not three digit";
    }
}