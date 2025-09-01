#include<iostream>
using namespace std; 
// important factorial
int fact(int n){
    
    if ( n ==1 ){ return 1  ; 
    }
    return  n*fact(n-1 ); 
    
}
int main (){
    int n ; 
    cout<<"enter number:";
    cin>>n;  
   int num =  fact(n);
   cout<<"factorial of n is:"<<num<<endl;
}