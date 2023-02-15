#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a =10;
    int *b;
    b = &a;
    //& ----->  Address of operator
    cout<<"a Address: "<<&a<<endl;
    cout<<"b pointer address: "<<b<<endl;

    //* -----> Dereference operator
    cout<<"a value: "<<*b<<endl;
}