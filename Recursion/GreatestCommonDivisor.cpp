#include<iostream>
using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter the numbers : ";
//     cin>>x>>y;
//     for(int i=min(x,y);i>=2;i--){
//         if(x%i==0 && y%i==0){
//             cout<<"HCF is : "<<i;
//             return 0;
//         }  
//     }
//     cout<<"H.C.F is : 1";
//     // return 1;
// }

int hcf(int a,int b){
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
        return 1;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
}
