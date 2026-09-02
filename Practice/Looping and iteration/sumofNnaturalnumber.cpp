// #include<iostream>
// using namespace std;
// int main(){
//     //using loop
//     int n,sum=0;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }

//using formula
#include<iostream>
using namespace std;
int main(){
    //using loop
    int n,sum;
    cout<<"Enter the number : ";
    cin>>n;
    sum=n*(n+1)/2;
    cout<<sum;
}