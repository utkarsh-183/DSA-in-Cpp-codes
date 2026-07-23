#include <iostream>
using namespace std;
int main()
{
    double M, P, C, Avg;
    cout << "enter mathematics marks:";
    cin >> M;
    cout << "enter physics marks:";
    cin >> P;
    cout << "enter chemistry marks:";
    cin >> C;
    Avg = (M + P + C) / 3;
    cout << "aggregate of three subjects are:" << Avg;
    cin >> Avg;
    return 0;
}