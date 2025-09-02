#include <iostream>
using namespace std;
// question 
//  change the value of odd index  to second multiple and even index increment by 10 
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
void change( int * arr  , int n ){
     for( int i = 0 ; i < n ; i++){
        if (i %2 == 0 ){
            arr[i] = arr[i] + 10 ; 
        } 
        else{
            arr[i] = 2* arr[i] ; 
        }
     }
}
int main()
{
    int n;
    cout << "enter number of elements in array:";
    cin >> n;
    int arr[n];
    cout << "enter elements in array:\n";
    scan(arr , n ); 
    cout << "print array before change \n";
    print(arr ,n ) ; 
    change(arr , n ) ; 
    cout << "print array after change \n";
    print(arr ,n ) ; 

}
