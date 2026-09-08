#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    void print(){
    cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }

    int matches(){
        return runs/avg;
    }
};

// void print(Cricketer c){
//     cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
// }

int main(){
    Cricketer c1("Virat kohli",25000,55.2);
    // c1.name = "Virat kohli";
    // c1.runs = 9230;

    Cricketer c2("Rohit sharma",18000,47.8);

    // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;

    // cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<endl;

    // print(c1);
    // print(c2);

    c1.print();
    c2.print();

    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
}