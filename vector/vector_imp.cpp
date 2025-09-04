#include <iostream>
#include<vector> 
using namespace std;
int main()
{
    vector<int>vect;
    vect.push_back(10);
    vect.push_back(11);
    vect.push_back(12);
    vect.push_back(13);
    vect.push_back(14);
    vect.push_back(15) ; 
    // every time when we add element in vector it capacity double 
    // for example 
    cout<<"size of vector : "<<vect.size()<<endl ; // output 6
    cout<<"capacity of vector : "<<vect.capacity()<<endl ; // output 8
}