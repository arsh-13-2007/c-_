#include <iostream>
using namespace std;
int main()
{
    // float cp , sp ; // cp= cost price and sp = selling price
    // cout<<"enter cp in decimal  form :";
    // cin>>cp;
    //  cout<<"enter sp in decimal form :";
    // cin>>sp;
    // if ( sp > cp ){
    //     cout<<"\nseller is in profit of:"<<sp-cp;
    // }
    // else if ( sp == cp ){
    //     cout<<"seller is neither in profit nor in loss";
    // }
    // else {
    //     cout<<"seller is in loss of:"<<cp-sp;
    // }
    int x, y;
    cout << "enter number x:";
    cin >> x;
    cout << "enter number y:";
    cin >> y;
    if ( x== 0 && y == 0 ){
        cout<<"points lie at origin";
    }
    else if ( x > 0 and y >  0 ){
        cout<<"points lies in 1st quadrant";
    }
    else if ( x > 0 and y <  0 ){
        cout<<"points lies in 4th quadrant";
    }
    else if ( x < 0 and y >  0 ){
        cout<<"points lies in 2nd quadrant";
    }
    else if ( x < 0 and y <  0 ){
        cout<<"points lies in 3rd quadrant";
    }
    else {
        cout<<"invalid number";
    }
}