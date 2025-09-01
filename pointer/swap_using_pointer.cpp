#include<iostream>
using namespace std;
// swap using pointer in c++
void swap(int *a, int *b){ // this is called pass reference  // very very important  
     
       int temp = *a ;
        *a = *b ;
        *b = temp ; 
}
int main (){
    int x = 13 ; 
    int y = 12 ; 
    swap(&x, &y); 
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
}