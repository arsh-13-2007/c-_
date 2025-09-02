#include <iostream>
using namespace std; 
void print( int * arr ,int n ){
     for (int i = 0; i < n; i++)
    {
        cout << "element of" << i << "th index:" << arr[i] << endl;
    }
}
int main()
{
    int r, c;
    cout << "enter number of row in array:";
    cin >> r;
    cout << "enter number ofcolumn in array:";
    cin >> c;
    int arr[r][c]  , brr[r][c]; 
    cout<<"enter elements in  first array:\n";

    for (int i = 0; i < r ; i++){
    for ( int j = 0 ; j < c ; j++){
            cin>>arr[i][j] ; 
        }
    }
     cout<<"enter elements in second array:\n";
    for (int i = 0; i < r ; i++){
    for ( int j = 0 ; j < c ; j++){
            cin>>brr[i][j] ; 
        }
    }
   
    for (int i = 0; i < r ; i++){
    for ( int j = 0 ; j < c ; j++){
        arr[i][j] = arr[i][j] + brr[i][j] ; 
        }
    }
     cout<<"print  sum of two 2d array:\n";
    for (int i = 0; i < r ; i++){
    for ( int j = 0 ; j < c ; j++){
        cout<<arr[i][j]<<endl ; 
        }
    }
}
