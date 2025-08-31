#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout<<"enter number:";
    cin>>n;
   // factorial of first n number 
   int factorial = 1  ; 
   for ( int j = 1 ; j <= n ; j++){
   for ( int i = 1; i <=j ; i++){
       factorial = factorial * i ; 
   }
   cout<<"factorial of given"<<j<<"is:"<<factorial<<endl; 
   factorial = 1 ; 
}
}