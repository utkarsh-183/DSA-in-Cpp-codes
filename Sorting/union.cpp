#include<iostream>
using namespace std;

int main(){
    int arrA[] = {1, 2, 3, 4};
    int arrB[] = {3, 4, 5, 6};

    int n = sizeof(arrA) / sizeof(arrA[0]);
    int m = sizeof(arrB) / sizeof(arrB[0]);

    int ans[20];
    int k = 0;

    for(int i = 0; i < n; i++){
        ans[k++] = arrA[i];
    }

    for(int i = 0; i < m; i++){
        bool found = false;

        for(int j = 0; j < k; j++){
            if(arrB[i] == ans[j]){
                found = true;
                break;
            }
        }

        if(!found){
            ans[k++] = arrB[i];
        }
    }

    for(int i = 0; i < k; i++){
        cout << ans[i] << " ";
    }

    return 0;
}