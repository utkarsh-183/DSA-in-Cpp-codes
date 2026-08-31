#include <iostream>
using namespace std;

int main()
{
    // using XOR
    //  int a, b;
    //  cout << "Enter a :";
    //  cin>>a;
    //  cout<<"Enter b :";
    //  cin>>b;

    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    // cout << "After: a=" << a << " b=" << b << endl;
    // return 0;

    // addition subtraction method
    //  int a,b;
    //  cout<<"Enter a :";
    //  cin>>a;
    //  cout<<"Enter b :";
    //  cin>>b;
    //  a=a+b;
    //  b=a-b;
    //  a=a-b;
    //  cout<<"After swapping :"<<a<<" "<<b;
    //  return 0;

    // using temp variable
    int a, b, temp;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b;
}
