#include<iostream>
#include<vector> 
using  namespace std; 
int main (){
    vector< int> vect = {1, 4, 6, 2,8, 10} ;
    int n ;
    cout<<"enter number that you want to search:";
    cin>>n; 
     for ( int i : vect){
        if( n == i ){
            cout<<"element found"<<endl ; 
            break ; 
        }
    }
}           