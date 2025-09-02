#include<iostream>
using namespace std; 
int main (){
    // array works on continues memory allocation 
    int n ; 
    cout<<"enter number of elements in array:";
    cin>>n ; 
    int arr[n] ; 
    cout<<"enter elements in array:\n";
    for ( int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
    cout<<"print array\n" ;
    for ( int i= 0 ; i< n ; i++){
        cout<<"element of"<<i<<"th index:"<<arr[i]<<endl; 
    }

}
