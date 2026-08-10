#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    switch (marks >= 40) {
        case 1:
            cout << "Pass";
            break;

        case 0:
            cout << "Fail";
            break;
    }

    return 0;
}