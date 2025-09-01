#include<iostream>
using namespace std;
// print 1 to n using recursion 
void num( int a ,int n ) {
    if ( a == n ){
        cout<<a<<endl; 
        return ; 
    }
    else {
    cout<<a<<endl; 
    a = a+1; 
    num(a , n ); 
    }
}
int main (){
    int n  ; 
    cout<<"enter number:";
    cin>>n;
    num(1,n); 
    cout<<"task complete"; 

}   