#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout<<"enter number:"; 
    cin>>n; 
    // pattern printing 
    // simple star pattern  
    for ( int i = 0 ; i < n ; i++) {
        for( int j =0 ; j < n; j++){
            cout<<"*"<<"" ; 
        }
        cout<<endl; 
    }


} 