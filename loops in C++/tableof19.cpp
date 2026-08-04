#include <iostream>
using namespace std;
int main()
{
    // for (int i = 19; i <= 190; i = i + 1)
    // {
    //     if (i % 19 == 0)
    //         cout << i<<endl;
    // }

    // 2nd method  //more effective
    for (int i = 19; i <= 190; i = i + 19)
    {
        cout << i << endl;
    }
}