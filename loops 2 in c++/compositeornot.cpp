#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    //     for(int i=2 ;i<=n-1;i++){
    //         if(n%i==0){
    //             cout<<n<<" is a composite number"<<endl;
    //             break;
    //          }
    //         if(n%i!=0){
    //             cout<<n<<" not a prime Number";

    //             break;
    //         }
    //     }
    // }

    bool flag = true; // true means prime
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = false; // false means composite
            break;
        }
    }
    if (n == 1)
        cout << "--> 1 is neither prime nor composite";
    else if (flag ==true)
        cout
            << n << "--> is prime ";
    else
        cout << n << "--> is composite ";
}
