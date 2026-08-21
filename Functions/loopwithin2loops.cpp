#include <iostream>
using namespace std;

int main(){  // int main() line is a function and code within it is afunction
    int a;
    for (int k=1;k<=3;k++){
        cout<<"Enter a :";
        cin>>a;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}