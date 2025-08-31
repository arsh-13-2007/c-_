#include<iostream>
using namespace std;
int main (){
    //use of loop 
    // for( int i = 0 ; i < 10 ; i++){
    //     cout<<"hello world\n"; 
    // }
    int n ; 
    cout<<"enter number:";
    cin>>n;
    // print table with help of loop 
    // for( int i = 1; i <= 10 ; i++){
    //     cout<<i*n<<endl;
    // }
    // print ap 
    // for ( int i=1 ; i<=2*n -1 ; i=i+2 ){
    //     cout<<i<<endl;
    // }

    // print the highest factor of given number 
    int factor = 1 ; 
    for ( int i = 1 ;i < n ; i++ ){
        if( n % i == 0 ){
            factor = i ; 
        }

    }
    cout<<factor ; 
}