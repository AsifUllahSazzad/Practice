#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    // cin>>a;
    int *ptr;
    ptr = &a;
    int **p;
    p = &ptr;

    cout<<"Ptr address: "<<p<<endl;
    cout<<"p value: "<<**p<<endl;
    cout<<"a address used ptr: "<<ptr<<endl;
    cout<<"a address used p: "<<*p<<endl;
}