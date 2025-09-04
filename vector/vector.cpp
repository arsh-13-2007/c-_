// STL( standard templete language)
// increase there size dynamically / means not  size change by demand
// it dynamically resize it self
// it store data of one  data type
// syntax = vector<data type> vector name
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int>vec = { 1, 2, 3} ;  // first way to initialize vector
    // vector<int>vec(4,1) ;  // second way to initialize vector  // mostly in use
    // vector<int>vec  ;  // third  way to initialize vector
    // how to take input in vector ;
    // vector< int  >vec( 4 , 0) ;
    // for ( int i : vec){ // this is called for each loop very very important
    //     cout<<i << endl ;
    // }
    cout << "next loop" << endl;
    vector<char> vect = {'a', 'r', 's', 'h'};
    for (char value : vect)
    { //  for each loop
        cout << value << endl;
    }

    // vector function
    cout << "size of function :" << vect.size() << endl;
    // to add element in vector  at end
    vect.push_back('g'); // we add elements in vector using this function most of time 
    vect.push_back('a');
    vect.push_back('r');
    vect.push_back('g');
    cout << "size of vector is:" << vect.size() << endl;
    // to remove element in vector from end
    vect.pop_back();
    cout << "size of vector is:" << vect.size() << endl;
    // print starting value of vector 
    cout<<"front(starting) value of vector: "<< vect.front()<<endl; 
     // print last value of vector
     cout<<"back(last) value of vector: "<< vect.back()<<endl ;
     // at any particular  index value 
      cout<<"2nd index  value in vector: "<< vect.at(2)<<endl ;


}