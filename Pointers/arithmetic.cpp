#include <iostream>
using namespace std;
int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
    sum+=i;
    }
    return sum;
}
int main(){
    cout<<"sum = "<<sumN(5)<<endl;
     cout<<"sum = "<<sumN(14)<<endl;
    return 0;
}