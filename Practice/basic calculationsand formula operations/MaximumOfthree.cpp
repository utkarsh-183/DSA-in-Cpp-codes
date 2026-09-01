#include <iostream>
using namespace std;
int main()
//{
//     int a,b,c;
//     cout<<"Enter 1st number :";
//     cin>>a;
//     cout<<"Enter 2nd number :";
//     cin>>b;
//     cout<<"Enter 3rd number :";
//     cin>>c;
//     if(a>b&&a>c){
//         cout<<"a is greatest";
//     }
//     else if(b>a&&b>c){
//         cout<<"b is greatest";
//     }
//     else if(c>a&&c>b){
//         cout<<"c is greatest";
//     }
//     else{
//         cout<<"default";
//     }
//     return 0;
// }
{
    int a,b,c;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    cout<<"Enter 3rd number :";
    cin>>c;
    if(a==b&&b==c){
        cout<<"all three are equal";
    }
    else if(a>=b&&a>=c){
        cout<<"a is greatest";
    }
    else if(b>=a&&b>=c){
        cout<<"b is greatest";
    }
    else{
        cout<<"c is greatest";
    }
    return 0;
}

 