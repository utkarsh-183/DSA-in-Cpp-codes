#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "enter no. of rows : " << endl;
    cin >> n;
    // your code goes here
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

}  