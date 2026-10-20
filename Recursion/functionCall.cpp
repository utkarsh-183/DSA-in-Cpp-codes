// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"NAMASTE"<<endl;
//     cout<<"HOW ARE YOU";
// }
// int product(int x,int y){
//     return x*y;
// }
// int main(){
//     greet();
//     cout<<endl;
//     greet(); 
//     cout<<endl;
//     int a,b;
//     cin>>a>>b;
//     cout<<product(a,b);
//     cout<<endl;
//     cout<< "value of a and b initially :"<<a<<" "<<b;
//     swap(a,b);
//     cout<<endl;
//     cout<<"value of a and b after swapping :"<<a<<" "<<b;
// } 

// #include<iostream>
// using namespace std;
// // void gun(){
// //     return;
// //     cout<<"Hello CW";
// // }
// void fun(){
//     cout<<"Hello PW"<<endl;
//    // fun(); infinite loop
//     return;
// }
// int main(){
//     fun();
// }

//recursion 
#include<iostream>
using namespace std;

void fun(int n){
    if(n==0) return;
    cout<<"Hello PW"<<endl;
    fun(n-1); 
}
int main(){
    fun(10);  //prints Hello PW 10 times
}
