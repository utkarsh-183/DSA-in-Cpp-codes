#include <iostream>
using namespace std;
void starTriangle(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    cout<<"for 3 lines"<<endl;
    starTriangle(3);
    cout<<"Raghav sir"<<endl;
    starTriangle(5);
    starTriangle(7);
}

//