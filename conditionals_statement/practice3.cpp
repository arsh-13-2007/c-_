#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout<<"enter number:";
    cin>>n;
    // int i = 10;  // infinite loop 
    // while ( i = 20 ){
    //    cout<<"hello"; 
    // }

    // count number of digit in given nuumber  
    int count = 0 ; 
    while ( n > 0 ){
        n = n / 10 ; 
    count++; 
    }
    cout<<count; 
    
   
}