#include <iostream>
using namespace std;
bool ispowerof2(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return ispowerof2(n/2);
    }
}
    int main(){
        int n;
        cout<<"enter the number : ";
        cin>>n;
        if (ispowerof2(n)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    return 0;
}