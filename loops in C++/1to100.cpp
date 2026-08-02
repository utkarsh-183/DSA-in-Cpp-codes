#include <iostream>
using namespace std;
int main()
{
    //     // int a;    //no use of writting this
    //     // cout << "enter the number:";
    //     // cin >> a;

    //     for (int i = 1; i <= 100; i++)
    //     {
    //         cout << i<<endl;
    //     }
    // }

    // even number from 1to100

    // for (int i = 2; i <= 100; i = i + 2)
    // {
    //     cout << i<<'\n';
    // }

    //another method
    for (int i = 1; i <= 100; i = i + 1)
    {
        if(i%2==0)
        cout << i<<'\n';
    }
}