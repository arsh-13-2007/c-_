#include<iostream>
using namespace std;
int main (){
    // int n ; 
    // cout<<"enter number:"; 
    // cin>>n; 
    // pattern printing  one vertical line and one horizontal line
    for ( int i =1 ; i <=5; i++) {
        for( int j =1 ; j <=5; j++){
            if ( j == 3  or i == 3 ){
            cout<<"*"<<" "; 
           }
           else{
            cout<<"  "; 
           }
        }
        cout<<endl; 
    }
} 