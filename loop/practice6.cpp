#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout<<"enter number:";
    cin>>n;
   // factorial of any number 
   int factorial = 1  ; 
   for ( int i = 1; i <=n ; i++){
       factorial = factorial * i ; 
   }
   cout<<"factorial of given number is:"<<factorial; 

}