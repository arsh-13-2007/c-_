#include<iostream>
using namespace std; 
// array is work on pass by refrence 
void array_function( int  *arr , int n ){
          arr[0] = -1 ;  // pass by refrence 
}
int main (){
    
    int n ; 
    cout<<"enter number of elements in array:";
    cin>>n ; 
    int arr[n] ; 
    cout<<"enter elements in array:\n";
    for ( int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
    array_function(arr, n ) ; 
    cout<<"print array\n" ;
    for ( int i= 0 ; i< n ; i++){
        cout<<"element of"<<i<<"th index:"<<arr[i]<<endl; 
    }
}




