//brute force

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
    // int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    // int k = 3;
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int Maxsum = INT_MIN;
    // int idx = -1;
    // for (int i = 0; i <= n - k; i++)
    // {
        // int sum = 0;
        // for (int j = i; j < i + k; j++)
        // {
            // sum += arr[j];
        // }
        // if (Maxsum < sum)
        // {
            // Maxsum = sum;
            // idx = i;
        // }
    // }
    // tno = (n-k+1)*k
    // Time complexity = O(k*n)
    // cout << Maxsum << endl;
    // cout << idx;
// }

// using sliding window

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxSum= INT_MIN;
    int idx = 0;
    int Sum = 0;
    for(int i=0;i<k;i++){
        Sum+=arr[i];
    }
    maxSum=Sum;
    int i = 1;
    int j = k;
    while(j<n){
        Sum = Sum + arr[j] - arr[i-1];
        if(maxSum<Sum){
            maxSum=Sum;
            idx = i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<idx;
}
