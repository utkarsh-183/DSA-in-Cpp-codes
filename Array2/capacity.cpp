#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;   // you need not need to mention the size
    v.push_back(6);  // 1 1
    v.push_back(8);  // 2 2
    v.push_back(1);  // 3 4
    v.push_back(4);  // 4 4
    v.push_back(7);  // 5 8
    v.push_back(3);  // 6 8
    v.push_back(9);  // 7 8
    v.push_back(8);  // 8 8
    v.push_back(5);  // 9 16
    v.push_back(2);  // 10 16
    v.push_back(0);  // 11 16
    v.push_back(11); // 12 16
    cout << "Size is : " << v.size() << endl;
    cout << "Capacity is : " << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "Size is : " << v.size() << endl;
    cout << "Capacity is : " << v.capacity() << endl; // size changes after popback but capacity remains same
}