#include <iostream>
using namespace std; 
int main()
{
    int r, c;
    cout << "enter number of row in array:";
    cin >> r;
    cout << "enter number ofcolumn in array:";
    cin >> c;
    int arr[r][c]  ; 
    cout<<"enter elements in array:\n";

    for (int i = 0; i < r ; i++){
    for ( int j = 0 ; j < c ; j++){
            cin>>arr[i][j] ; 
        }
    }
    cout<<"print array:\n";
    for (int i = 0; i < r ; i++){
    for ( int j = 0 ; j < c ; j++){
          cout<<arr[i][j]<<endl; 
        }
    }
}
