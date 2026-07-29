#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    int age;
    string branch;
    float marks;
};

int main()
{
    Student s1, s2, s3, s4, s5;

    cout << "Enter details of Student 1" << endl;
    cin >> s1.roll >> s1.name >> s1.age >> s1.branch >> s1.marks;

    cout << "Enter details of Student 2" << endl;
    cin >> s2.roll >> s2.name >> s2.age >> s2.branch >> s2.marks;

    cout << "Enter details of Student 3" << endl;
    cin >> s3.roll >> s3.name >> s3.age >> s3.branch >> s3.marks;

    cout << "Enter details of Student 4" << endl;
    cin >> s4.roll >> s4.name >> s4.age >> s4.branch >> s4.marks;

    cout << "Enter details of Student 5" << endl;
    cin >> s5.roll >> s5.name >> s5.age >> s5.branch >> s5.marks;

    cout << endl;
    
    cout << "Student 1" << endl;
    cout << s1.roll << endl;
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.branch << endl;
    cout << s1.marks << endl << endl;

    cout << "Student 2" << endl;
    cout << s2.roll << endl;
    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.branch << endl;
    cout << s2.marks << endl << endl;

    cout << "Student 3" << endl;
    cout << s3.roll << endl;
    cout << s3.name << endl;
    cout << s3.age << endl;
    cout << s3.branch << endl;
    cout << s3.marks << endl << endl;

    cout << "Student 4" << endl;
    cout << s4.roll << endl;
    cout << s4.name << endl;
    cout << s4.age << endl;
    cout << s4.branch << endl;
    cout << s4.marks << endl << endl;

    cout << "Student 5" << endl;
    cout << s5.roll << endl;
    cout << s5.name << endl;
    cout << s5.age << endl;
    cout << s5.branch << endl;
    cout << s5.marks << endl;

    return 0;
}