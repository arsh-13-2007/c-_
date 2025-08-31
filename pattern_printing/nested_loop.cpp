#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    //very very very very important pattern printing 
    for (int i = 1; i <= n; i++) {
        for (int j = n;j >= 1; j--) {
            if ( j <= i ){
                cout<<"*"<<" ";
            }
            else{
                 cout<<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}
