#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "123456";
    int x =stoi(str);
    cout<<x+1;
    cout<<endl;
    // int a=1234567;
    // string s = to_string(a);
    // cout<<s;

    string s="1234567891234";
    long long y=stoll(s);
    cout<<y;
}