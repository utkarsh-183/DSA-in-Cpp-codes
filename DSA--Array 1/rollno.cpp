#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<int> marks(n);

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (marks[i] < 35) {
            cout << "Roll number: " << i + 1 << endl;
        }
    }

    return 0;
}