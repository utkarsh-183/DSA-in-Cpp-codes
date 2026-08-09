#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks of student :";
    cin >> marks;
    // using if else condition
    //  if (x>33){
    //  cout<<"pass";
    //  }
    //  else{
    //      cout<<"fail";
    //  }

    // using ternary condition
    //  condition  ?  true: false
    (marks > 33) ? cout << "PASS" : cout << "FAIL";
}