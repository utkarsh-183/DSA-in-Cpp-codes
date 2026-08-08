#include <iostream>
using namespace std;
int main()
{
    int a, b, operation;
    cout << "Enter 1st number:";
    cin >> a;
    cout << "Enter 2nd number:";
    cin >> b;
    cin >> operation;

    switch (operation)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        if (b == 0)
        {
            cout << "invalid operation";
        }
        else
        {
            cout << a / b;
        }
    }
    return 0;
}