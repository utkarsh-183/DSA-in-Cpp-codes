#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v(5, 2); // size of vector is 5 and each element of vector has value 2
    // cout << v[0] << " ";
    // cout << v[1] << " ";
    // cout << v[2] << " ";
    // cout << v[3] << " ";
    // cout << v[4] << " ";
   // vector<vector<int>> v1(12,vector<int>(4)); //no. of vector=3,each vector has size 4
    vector<vector<int>> v2(10,vector<int>(4,3)); //no. of vector=3,each vector has size=3, and has each element =4 
    //cout<<v1.size()<<" ";
    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v2.size()<<" ";
    cout<<v2[0].size();

}
 