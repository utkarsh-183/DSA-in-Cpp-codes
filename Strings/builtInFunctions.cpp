#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    // string str="virat kohli is best white ball player";
    // cout<<str.size(); // or str.length();

    //     string str="abcd";
    //     cout<<str<<endl;
    //     str.push_back('e');
    //     str.push_back('2');
    //     cout<<str<<endl;
    // string str = "raghav sir";
    // cout << str << endl;
    // str.pop_back();
    // str.pop_back();
    // cout << str << endl;

    // string s="Utkarsh";
    // cout<<s<<endl;
    // string t="Tiwari";
    // cout<<t<<endl;
    // string u=s+t;
    // cout<<u<<endl;

    string str="abcdef";
    cout<<str<<endl;
    reverse(str.begin(),str.end()); //can be modified according to our nessicity
    cout<<str;
} 