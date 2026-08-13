// #include <iostream>
// #include <cstdarg>   
// using namespace std;

// int sum(int count, ...)
// {
//     va_list args;
//     va_start(args, count);

//     int total = 0;

//     for (int i = 0; i < count; i++)
//     {
//         total += va_arg(args, int);
//     }

//     va_end(args);

//     return total;
// }

// int main()
// {
//     cout << sum(3, 10, 20, 30) << endl;
//     cout<<sum(5,1,2,3,4,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// template<typename T>
// T sum(T value){
//     return value;
// }

// template<typename T, typename... Args>
// T sum(T first,Args... args){
//     return first + sum(args...);
// }

// int main(){
//     cout << sum(10, 20, 30) << endl;
//     cout<<sum(1.5,2.5,3.0);
//     return 0;
// }

//Fold expression

#include<iostream>
using namespace std;

template<typename... Args>
auto sum(Args... args){
    return (args + ...);
}

int main(){
    cout<<sum(10,20,30,40)<<endl;
}