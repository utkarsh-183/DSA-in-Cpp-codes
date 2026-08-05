#include <iostream>
using namespace std;
int main()
{
    // {
    //     while ('a' < 'b')
    //     {
    //         cout << "MALAYALAM is palindrome";
    //        // break;  We can use break to stop the loop
    //     }
    // }
    //palindrome is a number the is identical from both the ends


    {
        int i; //infinite loop as i=10 is assigment operator it increament its value and i is 10 throughout
        while(i=10){
            cout<<i<<endl;
            i++;
        }
    }

    // int x = 4,
    //     y = 0, z;
    // while (x >= 0)
    // {
    //     x--;
    //     y++;
    //     if (x == y)
    //         continue;
    //     else
    //         cout << x << " " << y << endl;
    // }

    //     int x = 4, y = 0, z; // output 40 31 [(13 04) is not printed due to break];
    //     while (x >= 0)
    //     {
    //         if (x == y)
    //             break;
    //         // continue; no use as loop gets stuck at 2,2 and continously checks at 2,2
    //         else
    //             cout << x << " " << y << endl;
    //         x--;
    //         y++;
    //     }
    // }

//     int t = 10;
//     while (t /= 2)
//     {
//         cout << "Hello" << endl;
//     }
 }