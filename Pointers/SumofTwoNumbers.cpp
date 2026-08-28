#include <iostream>
using namespace std;
int main()
{
    //     int x=6;
    //     int y=7;
    //     int* p1=&x;
    //     int* p2=&y;
    //     cout<<*p1+*p2;

    int x, y;
    int *p1 = &x;
    int *p2 = &y;
    cout << "Enter 1st number:";
    cin >> *p1;
    cout << "Enter 2st number:";
    cin >> y; // or we can use *p2
    cout << *p1 + *p2 << endl;
    // or we can use:
    cout << x + y;
}