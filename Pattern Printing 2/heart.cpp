// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter size";
//     cin>>n;

    
//     for(int i = n/2; i <= n; i+=2){
//         for(int j = 1; j <= n-i; j+=2) cout<<" ";
//         for(int j = 1; j <= i; j++) cout<<"*";
//         for(int j = 1; j <= n-i; j++) cout<<" ";
//         for(int j = 1; j <= i; j++) cout<<"*";
//         cout<<endl;
//     }

    
//     for(int i = n; i >= 1; i--){
//         for(int j = i; j < n; j++) cout<<" ";
//         for(int j = 1; j <= (i*2)-1; j++) cout<<"*";
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     // --- Upper Part ---
//     int nst = 1;       // stars in each semi-circle
//     int nsp = n;       // spaces between the semi-circles

//     for (int i = 1; i <= n; i++) {
//         // left stars
//         for (int j = 1; j <= nst; j++) cout << "*";
//         // spaces in middle
//         for (int j = 1; j <= nsp; j++) cout << " ";
//         // right stars
//         for (int j = 1; j <= nst; j++) cout << "*";
//         cout << endl;

//         nst++;      // increase stars
//         nsp -= 2;   // decrease middle spaces
//     }

//     // --- Lower Part ---
//     nst = 2 * n - 1;   // total stars at the first row of lower triangle
//     nsp = 0;           // leading spaces

//     for (int i = 1; i <= 2 * n - 1; i++) {
//         // leading spaces
//         for (int j = 1; j <= nsp; j++) cout << " ";
//         // stars
//         for (int j = 1; j <= nst; j++) cout << "*";
//         cout << endl;

//         nsp++;      // increase spaces
//         nst -= 2;   // decrease stars
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // --- Upper Part of Heart ---
    for (int i = n/2; i <= n; i += 2) {
        // spaces before left stars
        for (int j = 1; j <= n-i; j += 2) cout << " ";
        // left stars
        for (int j = 1; j <= i; j++) cout << "*";
        // spaces between halves
        for (int j = 1; j <= n-i; j++) cout << " ";
        // right stars
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    // --- Lower Part of Heart ---
    for (int i = n; i >= 1; i--) {
        // leading spaces
        for (int j = i; j < n; j++) cout << " ";
        // stars
        for (int j = 1; j <= (i*2)-1; j++) cout << "*";
        cout << endl;
    }

    return 0;
}