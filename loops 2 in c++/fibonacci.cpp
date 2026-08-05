// fibonacci series------>every new no. is sum of its 2 previous nos.
#include <iostream>
using namespace std;
int main()
{
    int n,a=1,b=1;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    
}

//2nd method
// for(int i=1;i<=n-2;i++){
//         sum = a+b;
//         a=b;
//         sum=a+b;
//     }
//     cout<<sum;
// }
