#include<iostream>
#include<vector> 
using  namespace std; 
void reverse( vector<int>&vect){
          int start = 0 ; 
          int end = vect.size() -1 ; 
          while ( start <= end ){
            int temp = vect.at(start) ; 
            vect.at( start) = vect.at(end) ; 
            vect.at(end) = temp ; 
            start ++ ; 
            end --  ; 
          }
          for ( int i : vect){
            cout<<i<<endl ; 
          }

}
int main (){
    vector< int> vect = {1, 4, 6, 2,8, 10} ;
    reverse(vect ) ; 
}           