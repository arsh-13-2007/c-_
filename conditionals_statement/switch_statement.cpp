#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter number x:";
    cin >> x;
    cout << "enter number y:";
    cin >> y;
    char ch;
    cin >> ch;
    switch (ch)
    {
    case '*':
        cout << x * y;
        break;
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;
    case '/':
        cout << x / y;
        break;
        default :
        cout<<"invalid statement";
    }
}