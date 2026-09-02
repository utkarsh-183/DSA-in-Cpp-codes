#include <iostream>
using namespace std;
int main()
{
    int P, R, T, SI;
    cout << "Enter principle :";
    cin >> P;
    cout << "Enter Rate :";
    cin >> R;
    cout << "Enter time :";
    cin >> T;
    SI = (P * R * T) / 100;
    cout << "Simple Interest is :" << SI;
    return 0;
}
