#include <iostream>
using namespace std;
int main()
{
    int a; // A leap year is divisible by 4, but if divisible by 100, it must also be divisible by 400.

    cout << "Enter year : ";
    cin >> a;
    if(a%400==0){
        cout<<"Leap year";
    }
    else if(a%100==0){
        cout<<"Not a leap year";
    }
    else if(a%4==0){
        cout<<"Leap year";
    }
    else{
        cout<<"Not a leap year";
    }
    return 0;
}
