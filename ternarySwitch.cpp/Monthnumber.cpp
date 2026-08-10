#include <iostream>
using namespace std;
int main()
{
     int x;
     cout << "Enter Month Number :";
     cin >> x;
    // switch (x)
    // {
    // case 1:
    //     cout << "31"; //jan
    //     break;
    // case 2:
    //     cout << "28";  //feb
    //     break;
    // case 3:
    //     cout << "31";  //march
    //     break;
    // case 4:
    //     cout << "30";  //april
    //     break;
    // case 5:
    //     cout << "31";  //may
    // case 6:
    //     cout << "30";  //june
    //     break;
    // case 7:
    //     cout << "31";  //july
    //     break;
    // case 8:
    //     cout << "31";  //august
    //     break;
    // case 9:
    //     cout << "30";  //sep
    //     break;
    // case 10:
    //     cout << "31"; //oct
    //     break;
    // case 11:
    //     cout << "30";  //nov
    //     break;

    // case 12:
    //     cout << "31"; //dec
    //     break;
    // default:
    // {
    //     cout << "Invalid number";
    // }
    // }
    




    //METHOD 2--->
    switch ((x<=7 && x%2!=0)  || (x>=8 && x%2==0)){
        case 1:
        cout<<"31";
    }
    switch(x==4  || x==6 || x==9 || x==11){
        case 1:
        cout<<"30";
    }
    switch (x){
        case 2:
        cout<<"28";
    }

}