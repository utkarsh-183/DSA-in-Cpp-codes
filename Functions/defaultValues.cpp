#include <iostream>
using namespace std;
// void fun(int x,int y){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun();    //shows error because x and y values are not addressed
// }

// void fun(int x=3,int y=4){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun();    //will not show error the value is initialised in void function
// }

// void fun(int x,int y){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun(5,6);
// }          //will not show error the value is initialised in main function

void fun(int x = 9, int y = 5)
{
    cout << x << " " << y;
}
int main()
{
    fun(5, 6);
}

//  shows 5 and 6 value as main contains actual value and void has default value
