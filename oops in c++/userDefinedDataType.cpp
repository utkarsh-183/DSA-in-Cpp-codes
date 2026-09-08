#include<iostream>
using namespace std;
class student{    //student as new data type;
  public:
    string name;   //attributes of the class
    int rollno;
    float cgpa;
};
int main(){
  student s1;
  s1.name="Utkarsh";
  s1.rollno=63;
  s1.cgpa=9.1;

  student s2;
  s2.name= "Harsh"; 
  s2.rollno = 35;
  s2.cgpa= 8.7;
}