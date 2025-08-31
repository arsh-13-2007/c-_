#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout<<"enter number:";
    cin>>n;
    // reverse the given number 
    int  num = 0  , x = 0 ; 
    cout<<"original number:"<<n<<endl; 
    while ( n > 0 ){
        x = n % 10 ; 
        n = n / 10 ; 
        num = ( 10 * num) + x ; 
    }  
    cout<<"reverse number :"<<num ; 
}