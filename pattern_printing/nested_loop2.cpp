#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout<<"enter number:"; 
    cin>>n; 
    // pattern printing
    // vertical counting pattern 
    for ( int i = 1 ; i <=n ; i++) {
        for( int j =1 ; j <= n; j++ ){
            cout<<i<<" "; 
        }
        cout<<endl; 
    }


} 