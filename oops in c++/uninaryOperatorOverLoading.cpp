#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }

    // Unary - operator
    void operator-() {
        x = -x;
    }

    void display() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Number n(10);

    cout << "Before: ";
    n.display();

    -n;   // calls operator-()

    cout << "After: ";
    n.display();

    return 0;
}