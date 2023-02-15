#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a =10;
    int *ptr = &a; //single pointer hold a address
    cout<<"Addresss: "<<ptr<<endl; //a address output
    cout<<"Value: "<<*ptr<<endl; //* -> dereference operator
    cout<<"------------------------"<<endl;
    int **p = &ptr; //pointer to pointer

    cout<<"Address: "<<p<<endl; //pointer to pointer address
    cout<<"Value: "<<**p<<endl; //pointer to pointer value(a =10)
    cout<<"Address: "<<*p<<endl; //a address

}