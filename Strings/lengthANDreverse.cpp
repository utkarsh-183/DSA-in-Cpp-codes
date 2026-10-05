#include<iostream>
using namespace std;

int getLenth(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int main(){
    char name[20];

    cout<<"Enter your name : ";
    cin>> name;

    cout<<"Your name is : "<<name;

    int len = getLenth(name);
    cout<<"Lenght : "<<len<<endl;

    reverse(name,len);
    cout<<"Reverse is "<<name;
}