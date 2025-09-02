#include<iostream>
using namespace std; 
// time complexity is o(n) so to decrease time complexity use two pointer approach 
int main(){
    int n ; 
    cout<<"enter n :";
    cin>>n; 
    int arr[n] ; 
    cout<<"enter elements in arrays:\n"; 
    for ( int i=0 ; i< n ; i++){
        cin>>arr[i] ; 
    }
    for ( int i = 0 ; i < (n/2) ; i++){
        int temp = arr[i] ; 
        arr[i] = arr[n-1-i] ; 
        arr[n-1-i] = temp ;  
    }
    cout<<"reverse array :\n";
    for ( int i=0 ; i< n ; i++){
        cout<<arr[i]<<endl; 
    }
}