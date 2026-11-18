// #include<iostream>
// using namespace std;

// int binary_to_decimal(string &binary){
//     int n = binary.size();
//     int result = 0;
//     for(int i=n-1;i>=0;i--){
//         char ch = binary[i];
//         int num = ch - '0';
//         result = result + num*(1<<(n-i-1));
//     }
//     return result;
// }

// string decimal_to_binary(int num){
//     string result = " ";
//     while(num>0){
//         if(num%2==0){
//             result = "0"+result;
//         }
//         else{
//             result = "1"+result;
//         }
//         num = num/2;
//     }
//     return result;
// }
// int main(){
//     string str = "001101";
//     cout<<binary_to_decimal(str)<<endl;
//     cout<<decimal_to_binary(18)<<endl;
// }

#include<iostream>
using namespace std;

int binary_to_decimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';
        result = result + num*(1<<(n-i-1));
    }
    return result;
}

string decimal_to_binary(int num){
    if(num == 0) return "0";   // edge case
    string result = "";
    while(num>0){
        if(num%2==0){
            result = "0"+result;
        }
        else{
            result = "1"+result;
        }
        num = num/2;
    }
    return result;
}

int main(){
    string binary;
    int decimal;

    cout << "Enter binary number: ";
    cin >> binary;

    cout << "Enter decimal number: ";
    cin >> decimal;

    cout << "Binary to Decimal: " << binary_to_decimal(binary) << endl;
    cout << "Decimal to Binary: " << decimal_to_binary(decimal) << endl;

    return 0;
}