#include <iostream>
using namespace std;
int main()
{
    double a;
    cout << "Enter the number :";
    cin >> a;
    if (int(a) % 2 == 0)
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }
}
