#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float marks;

    student(string name,int rno,float marks){
        this->name = name;  // this-> is same as (*this)
        this->rno = rno;
        this->marks = marks;
    }
};

    void change(student * s){
        s->name="Harsh";  
    }
int main(){
//     student s("Utkarsh", 56, 91);
// //    cout<<s.name<<" "<<s.rno<<" "<<s.marks;

//     student *ptr = &s;
//     cout<<s.name<<endl;
//     ptr->name = "Harsh";
//     cout<<s.name;

    // student s("Utkarsh", 56, 91);
    // cout<<s.name<<endl;
    // change(&s);
    // cout<<s.name<<endl;

    student* s = new student("Utkarsh" , 56, 91);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;
}