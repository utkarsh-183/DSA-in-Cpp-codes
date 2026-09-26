// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,4,2,7,46};
//    // int *ptr=&arr[0];
//     int*ptr=arr; //giving address
//     cout<<ptr<<endl;
//     for(int i=0;i<5;i++){
//         cout<<ptr[i]<<" ";
//     }
//     cout<<ptr[0];
// } //jab pointer ko pehle element ka address de de toh woh pura array access kar sakta hai

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,4,2,7,46};
//  int *ptr=arr;
//  for(int i=0;i<5;i++){
//     cout<<*ptr<<" ";
//     ptr++;
//  }
// }

// value updation
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 2, 7, 46};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " "; // ptr gives address where as *ptr gives value
        ptr++;
    }
    cout<<endl;
    ptr = arr;
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;
    for (int i = 0; i <= 4; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;
}
