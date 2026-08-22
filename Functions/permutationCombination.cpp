#include <iostream>
using namespace std;

// By loop method
//     int n;
//     cout << "enter n :";
//     cin >> n;
//     int r;
//     cout << "enter r :";
//     cin >> r;
//     int nfact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         nfact *= i;
//     }
//     int rfact = 1;
//     for (int i = 1; i <= r; i++)
//     {
//         rfact *= i;
//     }
//     int nrfact = 1; // nrfact=(n-r)!
//         for (int i = 1; i <= n-r; i++)
//         {
//             nrfact *= i;
//         }
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++ ){
    f=f*i;
}
return f;
}
int combination(int n,int r){
    int ncr=fact(n)/(fact (r)*fact(n-r));
    return ncr;
}
int permutation(int n,int r){
    int npr=fact(n)/fact(n-r);
}
int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
    int r;
    cout << "enter r :";
    cin >> r;
    // int nfact = fact(n);      //no need
    // int rfact = fact(r);
    // int nrfact = fact(n - r);
    // int ncr = nfact / (rfact*nrfact);
    int ncr=combination( n, r);
    int npr=permutation(n,r);
    cout<<"Combination is :"<<ncr<<endl<<"Permutation is :"<<npr;
}