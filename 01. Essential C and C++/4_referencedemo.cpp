#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int  a = 10;
    int &r = a; // r is a reference to a
    cout<<a<<" "<<r<<endl; // 10 10
    r = 20; // change the value of a through r
    cout<<a<<" "<<r<<endl; // 20 20
    return 0;
}