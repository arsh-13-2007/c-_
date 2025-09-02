#include <iostream>
using namespace std; 
void print( int * arr ,int n ){
     for (int i = 0; i < n; i++)
    {
        cout << "element of" << i << "th index:" << arr[i] << endl;
    }
}
void scan(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void copy( int *arr , int n ){
    int brr[n] ; 
    for ( int i = 0 ; i<n ; i++){
        brr[i] = arr[n-i-1] ; 
    }
    cout<<"new reverse array is:\n";
    print( brr , n ); 
}
int main()
{
    int n;
    cout << "enter number of elements in array:";
    cin >> n;
    int arr[n];
    cout << "enter elements in array:\n";
    scan(arr , n ); 
    cout << " original array \n";
    print(arr ,n ) ;  
    copy( arr ,n ) ; 
}
