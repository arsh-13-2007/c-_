#include<iostream>
using namespace std;
int  sum( int n ){
    int summ ;
    if ( n ==1 ){
        return 1 ; 
    }
        return n +sum(n-1);  
}
int main (){
    int n ; 
    cout<<"enter number:";
    cin>>n;  
    cout<<"sum of n number using recursion:"<<sum(n)<<endl;  
    cout<<"task complete"; 
}