#include<iostream>
using namespace std;

int main(){
    int arrA[8] = {1,2,3,4,5,6,7,8};
    int i = 0;
    int n = 7;
    while(i<n){
        int temp = arrA[i];
        arrA[i] = arrA[n];
        arrA[n] = temp;

        i++;
        n--;
    }
    for(int i=0;i<8;i++){
        cout<<arrA[i]<<" ";
    }
}