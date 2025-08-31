#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout<<"enter number:"; 
    cin>>n; 
 
    // down face right triangle pattern printing
      for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {   
            cout << "*"<<" ";
        }
        cout << endl;
    }
}
   // up face right triangle pattern printing 
    // for ( int i = 1 ; i <= n ; i++) {
    //     for( int j =1 ; j <=i ; j++){
    //         cout<<"*"<<""; 
    //     }
    //     cout<<endl; 
    // }

    // important// right triangle pattern printing which contain one line  number and one line alphabet
    // for ( int i= 1 ; i <=n ; i ++){
    //     for (int j = 1 ; j <= i ; j++){
    //         if ( i % 2 == 0  ){
    //             cout<<(char)(j + 64 )<<" "; 
    //         }
    //         else {
    //             cout<<j<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }