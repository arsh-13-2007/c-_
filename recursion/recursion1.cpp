#include<iostream>
using namespace std;
/* basic rule of recursion is that
 1. always give break statement in recursive code 
 */





// print n to 1 using recursion 
void num( int n ){
    if ( n == 1 ){
        cout<<1<<endl;
        return ;
    }
    else {
        cout<<n<<endl;
        n= n-1 ; 
        num(n) ; 
    }
    }
int main (){
    int n ; 
    cout<<"enter number:";
    cin>>n;
    num(n); 
    cout<<"task complete"; 
}