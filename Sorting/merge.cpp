#include<iostream>
using namespace std;

int main(){
    int arrA[7] = {1,3,4,0,0,0,0};
    int arrB[4] = {2,5,6,7};

    int n = 3;
    int m = 4;

    int i = n-1;
    int j = m-1;
    int k = n+m-1;

    while(i >= 0 && j >= 0){
        if(arrA[i] > arrB[j]){
            arrA[k] = arrA[i];
            i--;
        }
        else{
            arrA[k] = arrB[j];
            j--;
        }
        k--;
    }

    while(j >= 0){
        arrA[k] = arrB[j];
        j--;
        k--;
    }

    while(i >= 0){
        arrA[k] = arrA[i];
        i--;
        k--;
    }

    for(int x = 0; x < n+m; x++){
        cout << arrA[x] << " ";
    }
}