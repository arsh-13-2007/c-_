#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout<<"enter number:";
    cin>>n;
    // sum of even digit in given number 
    int sum = 0 ; 
    while( n > 0 ){
        if ( (n % 10) % 2 == 0 ){
        sum = sum + (n % 10) ;
        }
        n = n/ 10 ;

    }
   cout<<"sum of digit is:"<<sum; 
}