#include <iostream>
using namespace std;

class circle {
    double r;

public:
    circle(double radius) {
        r = radius;
    }

    double area() {
        return 3.14 * r * r;
    }
};

int main() {
    circle c(3);
    cout << c.area();
}