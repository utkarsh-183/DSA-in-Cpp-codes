#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    /* using if else condition*/
    // if(x%2==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }

    // using ternary statment
    (n % 2 == 0) ? cout << "EVEN" : cout << "ODD";
}
