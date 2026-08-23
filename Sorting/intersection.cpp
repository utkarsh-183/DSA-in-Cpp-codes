#include<iostream>
using namespace std;

int main(){
    int arrA[4] = {1,2,3,4};
    int arrB[4] = {3,4,5,6};

    int n = 4;
    int m = 4;

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m){
        if(arrA[i] == arrB[j]){
            cout << arrA[i] << " ";
            i++;
            j++;
        }
        else if(arrA[i] < arrB[j]){
            i++;
        }
        else{
            j++;
        }
    }

}